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
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0xf5769951, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x5a069eef, __VMLINUX_SYMBOL_STR(sock_diag_put_meminfo) },
	{ 0xd0d8621b, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x9f62f9e6, __VMLINUX_SYMBOL_STR(inet_twsk_put) },
	{ 0x64158617, __VMLINUX_SYMBOL_STR(sock_diag_unregister) },
	{ 0xa4eb4eff, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xd1a87653, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xc99690f9, __VMLINUX_SYMBOL_STR(sock_i_ino) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x94e68d3e, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x13a2a569, __VMLINUX_SYMBOL_STR(sock_diag_register) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x5152e605, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xcd279169, __VMLINUX_SYMBOL_STR(nla_find) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
	{ 0x49575b20, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x4582cd80, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x5b01be0e, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xd6cce325, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x3ff62317, __VMLINUX_SYMBOL_STR(local_bh_disable) },
	{ 0xaccd75e6, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x8bf826c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x178065f7, __VMLINUX_SYMBOL_STR(sock_diag_unregister_inet_compat) },
	{ 0xc4ac4190, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x799aca4, __VMLINUX_SYMBOL_STR(local_bh_enable) },
	{ 0x650de868, __VMLINUX_SYMBOL_STR(inet6_lookup) },
	{ 0x439a4a19, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xfdee7d42, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0xf37260ab, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x506691f1, __VMLINUX_SYMBOL_STR(sock_diag_check_cookie) },
	{ 0x8b618d08, __VMLINUX_SYMBOL_STR(overflowuid) },
	{ 0xd14bc4d9, __VMLINUX_SYMBOL_STR(sock_diag_save_cookie) },
	{ 0x7283cbfc, __VMLINUX_SYMBOL_STR(__inet_lookup_listener) },
	{ 0x63241790, __VMLINUX_SYMBOL_STR(nla_reserve) },
	{ 0x424425d3, __VMLINUX_SYMBOL_STR(sock_diag_register_inet_compat) },
	{ 0x6491058d, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0xe7d9816b, __VMLINUX_SYMBOL_STR(sock_i_uid) },
	{ 0x87b52a47, __VMLINUX_SYMBOL_STR(__netlink_dump_start) },
	{ 0xdc1c7171, __VMLINUX_SYMBOL_STR(__inet_lookup_established) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "CA905B8DA8ABAC7E74C794C");
