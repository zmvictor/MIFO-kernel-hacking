/*
 *  This file is used to debug the sch_generic.c
 *
 * Authors: Ming Zhu
 */
#include <linux/module.h>
#include <asm/uaccess.h>
#include <linux/bitops.h>
#include <linux/types.h>
#include <linux/kernel.h>
#include <linux/jiffies.h>
#include <linux/mm.h>
#include <linux/string.h>
#include <linux/socket.h>
#include <linux/sockios.h>
#include <linux/errno.h>
#include <linux/in.h>
#include <linux/inet.h>
#include <linux/inetdevice.h>
#include <linux/netdevice.h>
#include <linux/if_arp.h>
#include <linux/proc_fs.h>
#include <linux/skbuff.h>
#include <linux/init.h>
#include <linux/slab.h>

#include <net/arp.h>
#include <net/ip.h>
#include <net/protocol.h>
#include <net/route.h>
#include <net/tcp.h>
#include <net/sock.h>
#include <net/ip_fib.h>
#include <net/netlink.h>
#include <net/nexthop.h>

#include "fib_lookup.h"

#include <linux/pkt_sched.h>
#include <linux/mroute.h>
#include <linux/netfilter_ipv4.h>
#include <linux/random.h>
#include <linux/rcupdate.h>
#include <linux/times.h>
#include <net/dst.h>
#include <net/net_namespace.h>
#include <net/route.h>
#include <net/inetpeer.h>
#include <net/xfrm.h>
#include <net/netevent.h>
#include <net/rtnetlink.h>
#include <net/sch_generic.h>


static int (*original_func) (struct fib_result *res);
extern int (*debug_out_dev) (struct fib_result *res);

#define MAXQUEUE    65535
#define CGSTRATIO   80
#define queuesize(dev) skb_queue_len(&((dev->qdisc)->q))
#define queuelength(dev) (dev->qdisc)->limit

inline bool cgst_in_default(struct fib_info *fi)
{
    struct fib_nh *nexthop_nh = (struct fib_nh *)((fi)->fib_nh);
    struct net_device *out_dev = nexthop_nh->nh_dev;
    return queuesize(out_dev) >= (queuelength(out_dev) * CGSTRATIO / 100);
}

inline int select_alt_dev(struct fib_info *fi)
{
    struct fib_nh *nexthop_nh = (struct fib_nh *)((fi)->fib_nh);
    struct net_device *out_dev;
    int curnh, nhsel;
    int queue_min, qsize;
    for (curnh = 1, nhsel = 1, queue_min = MAXQUEUE; curnh < (fi)->fib_nhs; curnh++)
    {
        nexthop_nh += curnh;
        out_dev = nexthop_nh->nh_dev;
        qsize = queuesize(out_dev);

        if (qsize < queue_min)
        {
            queue_min = qsize;
            nhsel = curnh;
        }
    }
    return nhsel;
}

static inline int select_out_dev(struct fib_result *res)
{
    struct fib_info *fi = res->fi;
    int nhs = fi->fib_nhs;
    if (nhs == 1) {
        /* should not goes into this condition*/
        printk(KERN_INFO "only one nexthop is set!\n");
        return 0;
    }
    if (cgst_in_default(fi)) {
        res->nh_sel = select_alt_dev(fi);
    }
    return 0;
}


static int __init debug_init(void)
{
    printk(KERN_INFO "Hello debug out device\n");

    original_func = debug_out_dev;
    debug_out_dev = &select_out_dev;


	return 0;
}

static void __exit debug_fini(void)
{
    printk(KERN_INFO "Goodbye debug out device\n");
    debug_out_dev = original_func;
}

module_init(debug_init);
module_exit(debug_fini);
MODULE_LICENSE("GPL");
