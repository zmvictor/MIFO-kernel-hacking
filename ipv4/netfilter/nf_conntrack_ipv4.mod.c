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
	{ 0x8a7ec97b, __VMLINUX_SYMBOL_STR(nf_conntrack_in) },
	{ 0xd174049b, __VMLINUX_SYMBOL_STR(__nf_ct_refresh_acct) },
	{ 0x8fc2bde3, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_pernet_register) },
	{ 0x4faf5ffb, __VMLINUX_SYMBOL_STR(nf_ct_get_tuplepr) },
	{ 0x753ffa62, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xc0240dd4, __VMLINUX_SYMBOL_STR(nf_conntrack_set_hashsize) },
	{ 0xbbd0c73, __VMLINUX_SYMBOL_STR(nf_ct_deliver_cached_events) },
	{ 0xea054b22, __VMLINUX_SYMBOL_STR(nla_policy_len) },
	{ 0xc828477f, __VMLINUX_SYMBOL_STR(nf_conntrack_l4proto_tcp4) },
	{ 0x47d14fdc, __VMLINUX_SYMBOL_STR(nf_ip_checksum) },
	{ 0xc897fc23, __VMLINUX_SYMBOL_STR(nf_log_packet) },
	{ 0x87534642, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_unregister) },
	{ 0x74d8cd58, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x39bad33a, __VMLINUX_SYMBOL_STR(nf_ct_invert_tuple) },
	{ 0x5e894c37, __VMLINUX_SYMBOL_STR(__nf_conntrack_confirm) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1554fd20, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_pernet_unregister) },
	{ 0x2f287f0d, __VMLINUX_SYMBOL_STR(copy_to_user) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
	{ 0x49575b20, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xda27a9db, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_register) },
	{ 0x8ffe7e89, __VMLINUX_SYMBOL_STR(nf_conntrack_htable_size) },
	{ 0x9bbaad28, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_unregister) },
	{ 0xbc4c77ef, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6e224a7a, __VMLINUX_SYMBOL_STR(need_conntrack) },
	{ 0xe200d2d5, __VMLINUX_SYMBOL_STR(param_get_uint) },
	{ 0x3c7f00c3, __VMLINUX_SYMBOL_STR(nf_unregister_sockopt) },
	{ 0x9a492199, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_pernet_register) },
	{ 0xa2ff2184, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x6b6c3d10, __VMLINUX_SYMBOL_STR(nf_defrag_ipv4_enable) },
	{ 0x98b7553, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0x6b302993, __VMLINUX_SYMBOL_STR(nf_nat_seq_adjust_hook) },
	{ 0xcd446a56, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_pernet_unregister) },
	{ 0xa83a0d0d, __VMLINUX_SYMBOL_STR(nf_conntrack_l4proto_udp4) },
	{ 0x286ebf16, __VMLINUX_SYMBOL_STR(nf_register_sockopt) },
	{ 0xf0ce7d50, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0x47d5ab17, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x7f041373, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_register) },
	{ 0x86adc76b, __VMLINUX_SYMBOL_STR(nf_conntrack_find_get) },
	{ 0x76de988f, __VMLINUX_SYMBOL_STR(__nf_ct_l4proto_find) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_defrag_ipv4";


MODULE_INFO(srcversion, "BE0646E214DA15B2790B884");
