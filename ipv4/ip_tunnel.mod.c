#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x6a91b2bc, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x5d27d963, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0xf5769951, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x5789cb4b, __VMLINUX_SYMBOL_STR(icmpv6_send) },
	{ 0x9ffa3a75, __VMLINUX_SYMBOL_STR(netdev_max_backlog) },
	{ 0x76ebea8, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0xd0d8621b, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x77a47a4, __VMLINUX_SYMBOL_STR(napi_complete) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x7f682989, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xe043de2d, __VMLINUX_SYMBOL_STR(icmp_send) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x50c89f23, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0x22a4583b, __VMLINUX_SYMBOL_STR(neigh_destroy) },
	{ 0x274dc2b, __VMLINUX_SYMBOL_STR(netif_get_num_default_rss_queues) },
	{ 0x565433d1, __VMLINUX_SYMBOL_STR(skb_scrub_packet) },
	{ 0x5d808403, __VMLINUX_SYMBOL_STR(netif_napi_del) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x7d4dda87, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xc681ac6d, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0xf6388c56, __VMLINUX_SYMBOL_STR(sysctl_ip_default_ttl) },
	{ 0x70d1f8f3, __VMLINUX_SYMBOL_STR(strncat) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x395e8620, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0x17d873ba, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x299e3628, __VMLINUX_SYMBOL_STR(iptunnel_xmit) },
	{ 0x6f4b53cd, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0xfa0c33c3, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0xe7feb4e4, __VMLINUX_SYMBOL_STR(napi_gro_receive) },
	{ 0x88f21260, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x579fbcd2, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0xc4ac4190, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0xe3d5e376, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x746fe564, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xebeb829f, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x955e05c9, __VMLINUX_SYMBOL_STR(netdev_state_change) },
	{ 0x439a4a19, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x67f7403e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x7ecb001b, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0xb31d8ec7, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x21ca7c19, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7628f3c7, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0x7d50a24, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x88549dfe, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "629BE933A8BC02908FFF414");
