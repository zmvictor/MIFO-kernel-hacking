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
	{ 0x143dc8d0, __VMLINUX_SYMBOL_STR(xfrm4_prepare_output) },
	{ 0xd5064f88, __VMLINUX_SYMBOL_STR(xfrm_prepare_input) },
	{ 0x3aad1809, __VMLINUX_SYMBOL_STR(xfrm_unregister_mode) },
	{ 0x46c54b65, __VMLINUX_SYMBOL_STR(xfrm_register_mode) },
	{ 0x991928f3, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x8235805b, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xf1ad4909, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x2bc95bd4, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "DB72384D4775B9BA0B77A83");
