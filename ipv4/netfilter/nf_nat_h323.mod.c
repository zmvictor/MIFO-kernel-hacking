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
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x45df88d8, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_unregister) },
	{ 0xfea4af35, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_register) },
	{ 0xd73c460, __VMLINUX_SYMBOL_STR(nat_q931_hook) },
	{ 0xaf1eb3d8, __VMLINUX_SYMBOL_STR(nat_callforwarding_hook) },
	{ 0x448c62ba, __VMLINUX_SYMBOL_STR(nat_h245_hook) },
	{ 0xa43f45f3, __VMLINUX_SYMBOL_STR(nat_t120_hook) },
	{ 0x1dd91acf, __VMLINUX_SYMBOL_STR(nat_rtp_rtcp_hook) },
	{ 0x8abc9eb0, __VMLINUX_SYMBOL_STR(set_ras_addr_hook) },
	{ 0xbef20365, __VMLINUX_SYMBOL_STR(set_sig_addr_hook) },
	{ 0xddfbe27d, __VMLINUX_SYMBOL_STR(set_h225_addr_hook) },
	{ 0xa2c40569, __VMLINUX_SYMBOL_STR(set_h245_addr_hook) },
	{ 0x916a02b1, __VMLINUX_SYMBOL_STR(nf_ct_unexpect_related) },
	{ 0xb6dc933d, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x2fd5aa6f, __VMLINUX_SYMBOL_STR(get_h225_addr) },
	{ 0x47d5ab17, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x36ecaeca, __VMLINUX_SYMBOL_STR(__nf_nat_mangle_tcp_packet) },
	{ 0xe300d834, __VMLINUX_SYMBOL_STR(nf_nat_mangle_udp_packet) },
	{ 0x1b7f7ffc, __VMLINUX_SYMBOL_STR(nf_nat_follow_master) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x5ac4df3, __VMLINUX_SYMBOL_STR(nf_nat_setup_info) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_conntrack_h323,nf_nat";


MODULE_INFO(srcversion, "1ECFBBC73A706DB8D0D8967");
