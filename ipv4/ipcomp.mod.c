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
	{ 0xddac20e6, __VMLINUX_SYMBOL_STR(xfrm4_rcv) },
	{ 0x5a412c56, __VMLINUX_SYMBOL_STR(ipcomp_output) },
	{ 0xaca01140, __VMLINUX_SYMBOL_STR(ipcomp_input) },
	{ 0xf01dff65, __VMLINUX_SYMBOL_STR(ipcomp_destroy) },
	{ 0x8a2c9278, __VMLINUX_SYMBOL_STR(inet_del_protocol) },
	{ 0xcfa7ba7a, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0xd006412f, __VMLINUX_SYMBOL_STR(inet_add_protocol) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x85e652bf, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0xd0bced8d, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0xe1409be8, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0x17c5f8b8, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0x644cdf06, __VMLINUX_SYMBOL_STR(xfrm_state_insert) },
	{ 0xff75db49, __VMLINUX_SYMBOL_STR(xfrm_init_state) },
	{ 0x215c73b1, __VMLINUX_SYMBOL_STR(xfrm_state_alloc) },
	{ 0xb6db590e, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0x52d5574a, __VMLINUX_SYMBOL_STR(ipcomp_init_state) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xfrm_ipcomp";


MODULE_INFO(srcversion, "6EA5034AE9F5252100CEC02");
