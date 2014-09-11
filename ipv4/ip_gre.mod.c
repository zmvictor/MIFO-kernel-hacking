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
	{ 0xe058aae5, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xdc8d1af, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x11f02f7c, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0x6a6c0d44, __VMLINUX_SYMBOL_STR(ip_tunnel_change_mtu) },
	{ 0x6714e2c3, __VMLINUX_SYMBOL_STR(ip_tunnel_uninit) },
	{ 0xb1751d43, __VMLINUX_SYMBOL_STR(ip_tunnel_dellink) },
	{ 0x1976aa06, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x57ef4fc9, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x3c91843f, __VMLINUX_SYMBOL_STR(gre_cisco_unregister) },
	{ 0x71d1afaa, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x13a1c4b0, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0xfe02e40d, __VMLINUX_SYMBOL_STR(gre_cisco_register) },
	{ 0x81c8a315, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2f287f0d, __VMLINUX_SYMBOL_STR(copy_to_user) },
	{ 0x3d404897, __VMLINUX_SYMBOL_STR(ip_tunnel_ioctl) },
	{ 0x362ef408, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x49575b20, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xf1ad4909, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x376a713, __VMLINUX_SYMBOL_STR(ip_tunnel_newlink) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x967894ac, __VMLINUX_SYMBOL_STR(ip_tunnel_changelink) },
	{ 0xf9350442, __VMLINUX_SYMBOL_STR(ip_tunnel_rcv) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x188eb6d9, __VMLINUX_SYMBOL_STR(ip_tunnel_lookup) },
	{ 0xfeeac648, __VMLINUX_SYMBOL_STR(ip_tunnel_delete_net) },
	{ 0xdd7d7ce3, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x88549dfe, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xebeb829f, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x20b8bebd, __VMLINUX_SYMBOL_STR(gre_handle_offloads) },
	{ 0xad5f9c76, __VMLINUX_SYMBOL_STR(ip_mc_inc_group) },
	{ 0x7f682989, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x21ca7c19, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x5db532f2, __VMLINUX_SYMBOL_STR(ip_mc_dec_group) },
	{ 0xf68b4a38, __VMLINUX_SYMBOL_STR(inetdev_by_index) },
	{ 0xbd1145c4, __VMLINUX_SYMBOL_STR(ip_tunnel_init) },
	{ 0xc75bed00, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x5470ff6a, __VMLINUX_SYMBOL_STR(ip_tunnel_xmit) },
	{ 0x5621d739, __VMLINUX_SYMBOL_STR(gre_build_header) },
	{ 0xda40c663, __VMLINUX_SYMBOL_STR(ip_tunnel_setup) },
	{ 0x238d3772, __VMLINUX_SYMBOL_STR(ip_tunnel_init_net) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tunnel,gre";


MODULE_INFO(srcversion, "8C7F803E4AAB71DF39E454E");
