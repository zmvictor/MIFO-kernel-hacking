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
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0xd1a87653, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x991928f3, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x46c54b65, __VMLINUX_SYMBOL_STR(xfrm_register_mode) },
	{ 0xf6388c56, __VMLINUX_SYMBOL_STR(sysctl_ip_default_ttl) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
	{ 0x4582cd80, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xd5064f88, __VMLINUX_SYMBOL_STR(xfrm_prepare_input) },
	{ 0x3aad1809, __VMLINUX_SYMBOL_STR(xfrm_unregister_mode) },
	{ 0xebeb829f, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x8235805b, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x143dc8d0, __VMLINUX_SYMBOL_STR(xfrm4_prepare_output) },
	{ 0xb44aed47, __VMLINUX_SYMBOL_STR(__ip_select_ident) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "82F6BE5D680DF08DE2F5D5D");
