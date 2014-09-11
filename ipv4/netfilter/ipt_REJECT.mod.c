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
	{ 0x9382ee00, __VMLINUX_SYMBOL_STR(ip_local_out) },
	{ 0xd4795550, __VMLINUX_SYMBOL_STR(nf_ct_attach) },
	{ 0x47d5ab17, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xe043de2d, __VMLINUX_SYMBOL_STR(icmp_send) },
	{ 0xc4ac4190, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xf6388c56, __VMLINUX_SYMBOL_STR(sysctl_ip_default_ttl) },
	{ 0x25c0d13c, __VMLINUX_SYMBOL_STR(ip_route_me_harder) },
	{ 0xdfc7f7b0, __VMLINUX_SYMBOL_STR(__skb_dst_set_noref) },
	{ 0x7dd088a5, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xaccd75e6, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x47d14fdc, __VMLINUX_SYMBOL_STR(nf_ip_checksum) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables";


MODULE_INFO(srcversion, "6760D84C78CBCDD2FF68D67");
