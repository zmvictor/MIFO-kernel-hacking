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
	{ 0x6a6c0d44, __VMLINUX_SYMBOL_STR(ip_tunnel_change_mtu) },
	{ 0x6714e2c3, __VMLINUX_SYMBOL_STR(ip_tunnel_uninit) },
	{ 0xb1751d43, __VMLINUX_SYMBOL_STR(ip_tunnel_dellink) },
	{ 0x1976aa06, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x71d1afaa, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x57ef4fc9, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x2a3f127f, __VMLINUX_SYMBOL_STR(xfrm4_tunnel_deregister) },
	{ 0x13a1c4b0, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0xf4978393, __VMLINUX_SYMBOL_STR(xfrm4_tunnel_register) },
	{ 0x81c8a315, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe1409be8, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0xd0bced8d, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xfeeac648, __VMLINUX_SYMBOL_STR(ip_tunnel_delete_net) },
	{ 0x88549dfe, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x5470ff6a, __VMLINUX_SYMBOL_STR(ip_tunnel_xmit) },
	{ 0xf9350442, __VMLINUX_SYMBOL_STR(ip_tunnel_rcv) },
	{ 0x895d5854, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0xc4ac4190, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x3840d4c0, __VMLINUX_SYMBOL_STR(iptunnel_pull_header) },
	{ 0x188eb6d9, __VMLINUX_SYMBOL_STR(ip_tunnel_lookup) },
	{ 0xbd1145c4, __VMLINUX_SYMBOL_STR(ip_tunnel_init) },
	{ 0x2f287f0d, __VMLINUX_SYMBOL_STR(copy_to_user) },
	{ 0x3d404897, __VMLINUX_SYMBOL_STR(ip_tunnel_ioctl) },
	{ 0x362ef408, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xda40c663, __VMLINUX_SYMBOL_STR(ip_tunnel_setup) },
	{ 0x376a713, __VMLINUX_SYMBOL_STR(ip_tunnel_newlink) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x967894ac, __VMLINUX_SYMBOL_STR(ip_tunnel_changelink) },
	{ 0x49575b20, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x238d3772, __VMLINUX_SYMBOL_STR(ip_tunnel_init_net) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tunnel,tunnel4";


MODULE_INFO(srcversion, "A6ADA5B64D0A16C2015DFCC");
