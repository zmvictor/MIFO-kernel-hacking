/*
 *  This file is used to debug the sch_generic.c
 *
 * Authors: Ming Zhu
 */

#include <linux/bitops.h>
#include <linux/module.h>
#include <linux/types.h>
#include <linux/kernel.h>
#include <linux/sched.h>
#include <linux/string.h>
#include <linux/errno.h>
#include <linux/netdevice.h>
#include <linux/skbuff.h>
#include <linux/rtnetlink.h>
#include <linux/init.h>
#include <linux/rcupdate.h>
#include <linux/list.h>
#include <linux/slab.h>
#include <net/pkt_sched.h>
#include <net/dst.h>


static int (*original_dev_func) (struct Qdisc *qdisc);
extern int (*debug_dev_xmit) (struct Qdisc *qdisc);

static inline int new_dev_func(struct Qdisc *q)
{
    printk(KERN_INFO "Load hook\n");
    if (!(q->flags & TCQ_F_CAN_BYPASS))
        printk (KERN_INFO "Cannot bypass!\n");
    else if (qdisc_qlen(q))
        printk (KERN_INFO "Queue length is above zero!\n");
    else if (!qdisc_run_begin(q))
        printk (KERN_INFO "Qdisc is running!\n");
    return 0;
}


static int __init debug_init(void)
{
    printk(KERN_INFO "Hello debug dev\n");

    original_dev_func = debug_dev_xmit;
    debug_dev_xmit = &new_dev_func;

	return 0;
}

static void __exit debug_fini(void)
{
    printk(KERN_INFO "Goodbye debug dev!\n");
    debug_dev_xmit = original_dev_func;
}

module_init(debug_init);
module_exit(debug_fini);
MODULE_LICENSE("GPL");
