/*
 * This file is used to debug the sch_generic.c
 *
 * Authors: Ming Zhu
 */
#include <linux/module.h>
#include <asm/uaccess.h>
#include <linux/bitops.h>
#include <linux/capability.h>
#include <linux/types.h>
#include <linux/kernel.h>
#include <linux/mm.h>
#include <linux/string.h>
#include <linux/socket.h>
#include <linux/sockios.h>
#include <linux/errno.h>
#include <linux/in.h>
#include <linux/inet.h>
#include <linux/inetdevice.h>
#include <linux/netdevice.h>
#include <linux/if_addr.h>
#include <linux/if_arp.h>
#include <linux/skbuff.h>
#include <linux/cache.h>
#include <linux/init.h>
#include <linux/list.h>
#include <linux/slab.h>

#include <net/ip.h>
#include <net/protocol.h>
#include <net/route.h>
#include <net/tcp.h>
#include <net/sock.h>
#include <net/arp.h>
#include <net/ip_fib.h>
#include <net/rtnetlink.h>
#include <net/xfrm.h>


static int (*original_func) (struct sk_buff *skb, struct nlmsghdr *nlh);
extern int (*debug_rtm_err) (struct sk_buff *, struct nlmsghdr *);
extern int rtm_to_fib_config(struct net *net, struct sk_buff *skb,
			     struct nlmsghdr *nlh, struct fib_config *cfg);
extern struct fib_table *fib_new_table(struct net *net, u32 id);
extern int fib_table_insert(struct fib_table *tb, struct fib_config *cfg);

static int print_err (struct sk_buff *skb, struct nlmsghdr *nlh)
{
	struct net *net = sock_net(skb->sk);
	struct fib_config cfg;
	struct fib_table *tb;
	int err;

	err = rtm_to_fib_config(net, skb, nlh, &cfg);
    printk(KERN_INFO "err in config is %d\n", err);
	if (err < 0)
		goto errout;

	tb = fib_new_table(net, cfg.fc_table);
	if (tb == NULL) {
		err = -ENOBUFS;
        printk(KERN_INFO "err in finding table is %d\n", err);
		goto errout;
	}

	err = fib_table_insert(tb, &cfg);
    printk(KERN_INFO "err in inserting is %d\n", err);
errout:
    return 0;
}

static int __init debug_init(void)
{
    printk(KERN_INFO "Hello debug rtm\n");

    original_func = debug_rtm_err;
    debug_rtm_err = &print_err;

	return 0;
}

static void __exit debug_fini(void)
{
    printk(KERN_INFO "Goodbye debug rtm\n");
    debug_rtm_err = original_func;
}

module_init(debug_init);
module_exit(debug_fini);
MODULE_LICENSE("GPL");
