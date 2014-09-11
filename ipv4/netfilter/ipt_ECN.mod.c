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
	{ 0x7f7c61f8, __VMLINUX_SYMBOL_STR(xt_unregister_target) },
	{ 0x2e3bd7d6, __VMLINUX_SYMBOL_STR(xt_register_target) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x47d5ab17, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x7d50a24, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0xea729689, __VMLINUX_SYMBOL_STR(inet_proto_csum_replace4) },
	{ 0x4a528acf, __VMLINUX_SYMBOL_STR(skb_make_writable) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables";


MODULE_INFO(srcversion, "63C4C518186D75548DE3745");
