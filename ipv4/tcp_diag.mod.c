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
	{ 0x1d87fba8, __VMLINUX_SYMBOL_STR(inet_diag_unregister) },
	{ 0x67889bec, __VMLINUX_SYMBOL_STR(inet_diag_register) },
	{ 0x6714212c, __VMLINUX_SYMBOL_STR(inet_diag_dump_icsk) },
	{ 0x8ce3d932, __VMLINUX_SYMBOL_STR(inet_diag_dump_one_icsk) },
	{ 0xfad20f83, __VMLINUX_SYMBOL_STR(tcp_hashinfo) },
	{ 0x1442877d, __VMLINUX_SYMBOL_STR(tcp_get_info) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=inet_diag";


MODULE_INFO(srcversion, "4FE17A47EA181DB5CD7B966");
