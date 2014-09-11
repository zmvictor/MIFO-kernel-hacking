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
	{ 0xf2bdcc5b, __VMLINUX_SYMBOL_STR(tcp_reno_min_cwnd) },
	{ 0xa5b96fa9, __VMLINUX_SYMBOL_STR(tcp_reno_ssthresh) },
	{ 0x8165d565, __VMLINUX_SYMBOL_STR(tcp_unregister_congestion_control) },
	{ 0xc226d92e, __VMLINUX_SYMBOL_STR(tcp_register_congestion_control) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xb1a4ce1c, __VMLINUX_SYMBOL_STR(tcp_reno_cong_avoid) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "B86980D8685B7CB97426FE2");
