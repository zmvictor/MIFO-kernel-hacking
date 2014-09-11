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
	{ 0xdec31292, __VMLINUX_SYMBOL_STR(xt_hook_unlink) },
	{ 0x74d8cd58, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x2ecc340b, __VMLINUX_SYMBOL_STR(xt_hook_link) },
	{ 0xa2ff2184, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xbfe729f5, __VMLINUX_SYMBOL_STR(arpt_do_table) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa76552b1, __VMLINUX_SYMBOL_STR(arpt_register_table) },
	{ 0x29f159ad, __VMLINUX_SYMBOL_STR(arpt_alloc_initial_table) },
	{ 0x5b9674be, __VMLINUX_SYMBOL_STR(arpt_unregister_table) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,arp_tables";


MODULE_INFO(srcversion, "838AEB90ABC0D656AC52914");
