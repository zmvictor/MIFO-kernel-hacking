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
	{ 0x2a3f127f, __VMLINUX_SYMBOL_STR(xfrm4_tunnel_deregister) },
	{ 0xcfa7ba7a, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0xf4978393, __VMLINUX_SYMBOL_STR(xfrm4_tunnel_register) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x85e652bf, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0xf0842fae, __VMLINUX_SYMBOL_STR(xfrm4_rcv_encap) },
	{ 0xf1ad4909, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tunnel4";


MODULE_INFO(srcversion, "BE38A7F5AB1543CF3B8EFAF");
