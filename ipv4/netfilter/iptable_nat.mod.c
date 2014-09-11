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
	{ 0xbc4c77ef, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0x74d8cd58, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x98b7553, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0xa2ff2184, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x7f682989, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xd8842a8b, __VMLINUX_SYMBOL_STR(nf_xfrm_me_harder) },
	{ 0x25c0d13c, __VMLINUX_SYMBOL_STR(ip_route_me_harder) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2411f633, __VMLINUX_SYMBOL_STR(nf_nat_icmp_reply_translation) },
	{ 0x816ea0ca, __VMLINUX_SYMBOL_STR(__nf_ct_ext_add_length) },
	{ 0xa153ada, __VMLINUX_SYMBOL_STR(nf_nat_packet) },
	{ 0x5ac4df3, __VMLINUX_SYMBOL_STR(nf_nat_setup_info) },
	{ 0xbc637695, __VMLINUX_SYMBOL_STR(ipt_do_table) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x8de0efb8, __VMLINUX_SYMBOL_STR(__nf_ct_kill_acct) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6b3d5c21, __VMLINUX_SYMBOL_STR(ipt_register_table) },
	{ 0xe9b1257b, __VMLINUX_SYMBOL_STR(ipt_alloc_initial_table) },
	{ 0xbacb9613, __VMLINUX_SYMBOL_STR(ipt_unregister_table) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_nat,nf_nat_ipv4,nf_conntrack,ip_tables";


MODULE_INFO(srcversion, "22FC08135673BF996B25929");
