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

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x6a91b2bc, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x11f02f7c, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0x71d1afaa, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x796149d7, __VMLINUX_SYMBOL_STR(xfrm4_mode_tunnel_input_deregister) },
	{ 0x13a1c4b0, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x57ef4fc9, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x91880341, __VMLINUX_SYMBOL_STR(xfrm4_mode_tunnel_input_register) },
	{ 0x81c8a315, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x2f287f0d, __VMLINUX_SYMBOL_STR(copy_to_user) },
	{ 0x362ef408, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x395e8620, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0x955e05c9, __VMLINUX_SYMBOL_STR(netdev_state_change) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x5d27d963, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x297c770e, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xe3d5e376, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0xb31d8ec7, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x8315b344, __VMLINUX_SYMBOL_STR(__secpath_destroy) },
	{ 0x895d5854, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0xd0bced8d, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0x50c89f23, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x7628f3c7, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x88549dfe, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xfa0c33c3, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0x7f682989, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x21ca7c19, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x49575b20, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x17d873ba, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tunnel,xfrm4_mode_tunnel";


MODULE_INFO(srcversion, "985B6505F44663228395403");
