#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x6a91b2bc, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x1402db07, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0xbcf21a07, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xc9f4200a, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x74d8cd58, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0xa2ff2184, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x2d37342e, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0x3fa58ef8, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xbd2c99da, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x2bb9cec5, __VMLINUX_SYMBOL_STR(kthread_bind) },
	{ 0xdb1d1ac6, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0xd7a6591d, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0x75bb675a, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x622fa02a, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x4482cdb, __VMLINUX_SYMBOL_STR(__refrigerator) },
	{ 0xd3812613, __VMLINUX_SYMBOL_STR(freezing_slow_path) },
	{ 0xf37260ab, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0xfdee7d42, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x7ab88a45, __VMLINUX_SYMBOL_STR(system_freezing_cnt) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x9e61bb05, __VMLINUX_SYMBOL_STR(set_freezable) },
	{ 0x19a9e62b, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x68dfc59f, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xdbefcd64, __VMLINUX_SYMBOL_STR(hrtimer_start_range_ns) },
	{ 0x81e4d30c, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0xed6aee98, __VMLINUX_SYMBOL_STR(hrtimer_init_sleeper) },
	{ 0x781c6eca, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x8bf826c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xa4eb4eff, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x2124474, __VMLINUX_SYMBOL_STR(ip_send_check) },
	{ 0xdd7d7ce3, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xebeb829f, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xf1ad4909, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x666a18a7, __VMLINUX_SYMBOL_STR(xfrm_stateonly_find) },
	{ 0x54efb5d6, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x8991070f, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x47385ee3, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xd817d8f7, __VMLINUX_SYMBOL_STR(proc_remove) },
	{ 0xf1deabf2, __VMLINUX_SYMBOL_STR(div64_u64) },
	{ 0xc4ac4190, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x4cdb3178, __VMLINUX_SYMBOL_STR(ns_to_timeval) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9c55cec, __VMLINUX_SYMBOL_STR(schedule_timeout_interruptible) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x32e8d68a, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0xf84dbc49, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0x9e0c711d, __VMLINUX_SYMBOL_STR(vzalloc_node) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x439a4a19, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf5769951, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x4292364c, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x17c5f8b8, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0x8812dd77, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x5d69d09a, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0xef9ec50b, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0x4f68e5c9, __VMLINUX_SYMBOL_STR(do_gettimeofday) },
	{ 0x2bc95bd4, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x7dd088a5, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x2b715dd, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xaccd75e6, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x6c2e3320, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xd0d8621b, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x25c677c4, __VMLINUX_SYMBOL_STR(mac_pton) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xe57878a1, __VMLINUX_SYMBOL_STR(in6_pton) },
	{ 0x1b6314fd, __VMLINUX_SYMBOL_STR(in_aton) },
	{ 0xb6ed1e53, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xa4f2b30, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x362ef408, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x11f7ed4c, __VMLINUX_SYMBOL_STR(hex_to_bin) },
	{ 0x753ffa62, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xd1a87653, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0x76ebea8, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x67f7403e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xe2491fc0, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x4582cd80, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb14d5c4c, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x1139d0a0, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0xeda36664, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0x167e7f9d, __VMLINUX_SYMBOL_STR(__get_user_1) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F224E489D4865F058D89F3A");
