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
	{ 0x1976aa06, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xdec31292, __VMLINUX_SYMBOL_STR(xt_hook_unlink) },
	{ 0x74d8cd58, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x2ecc340b, __VMLINUX_SYMBOL_STR(xt_hook_link) },
	{ 0xa2ff2184, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xbc637695, __VMLINUX_SYMBOL_STR(ipt_do_table) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6b3d5c21, __VMLINUX_SYMBOL_STR(ipt_register_table) },
	{ 0xe9b1257b, __VMLINUX_SYMBOL_STR(ipt_alloc_initial_table) },
	{ 0xbacb9613, __VMLINUX_SYMBOL_STR(ipt_unregister_table) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,ip_tables";


MODULE_INFO(srcversion, "124F8585002E9CFD49EF077");
