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
	{ 0xf2844f6e, __VMLINUX_SYMBOL_STR(inet_diag_bc_sk) },
	{ 0x8bf826c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xa4eb4eff, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x7a9bf88d, __VMLINUX_SYMBOL_STR(udplite_table) },
	{ 0xa363dab4, __VMLINUX_SYMBOL_STR(udp_table) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xc4ac4190, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x2010a20f, __VMLINUX_SYMBOL_STR(__udp4_lib_lookup) },
	{ 0xd6cce325, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xd2ee4cc1, __VMLINUX_SYMBOL_STR(inet_sk_diag_fill) },
	{ 0xaccd75e6, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x5b01be0e, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x506691f1, __VMLINUX_SYMBOL_STR(sock_diag_check_cookie) },
	{ 0x4c491b8d, __VMLINUX_SYMBOL_STR(__udp6_lib_lookup) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=inet_diag";


MODULE_INFO(srcversion, "10EDC3DE7B66A4EBA110116");
