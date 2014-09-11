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
	{ 0xe043de2d, __VMLINUX_SYMBOL_STR(icmp_send) },
	{ 0xd0bced8d, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0x8a2c9278, __VMLINUX_SYMBOL_STR(inet_del_protocol) },
	{ 0x57ef4fdb, __VMLINUX_SYMBOL_STR(kfree_skb_list) },
	{ 0x991928f3, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x388999d, __VMLINUX_SYMBOL_STR(skb_checksum) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
	{ 0xf1ad4909, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x89499d3b, __VMLINUX_SYMBOL_STR(inet_del_offload) },
	{ 0xd006412f, __VMLINUX_SYMBOL_STR(inet_add_protocol) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0xe2f7c429, __VMLINUX_SYMBOL_STR(inet_add_offload) },
	{ 0xff96dc67, __VMLINUX_SYMBOL_STR(skb_mac_gso_segment) },
	{ 0x7836f463, __VMLINUX_SYMBOL_STR(skb_checksum_help) },
	{ 0xc4ac4190, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xe1409be8, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0xebeb829f, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x3840d4c0, __VMLINUX_SYMBOL_STR(iptunnel_pull_header) },
	{ 0x258a890c, __VMLINUX_SYMBOL_STR(netif_skb_dev_features) },
	{ 0x4afb28aa, __VMLINUX_SYMBOL_STR(__skb_checksum_complete) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "9DC337526D515FC3E160BD2");
