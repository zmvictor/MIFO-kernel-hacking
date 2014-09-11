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
	{ 0xbcf21a07, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xc9f4200a, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xf499fdb2, __VMLINUX_SYMBOL_STR(rcu_barrier_bh) },
	{ 0x7f7c61f8, __VMLINUX_SYMBOL_STR(xt_unregister_target) },
	{ 0xac34070d, __VMLINUX_SYMBOL_STR(nf_unregister_hook) },
	{ 0xd7a6591d, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0x93361036, __VMLINUX_SYMBOL_STR(nf_register_hook) },
	{ 0x2e3bd7d6, __VMLINUX_SYMBOL_STR(xt_register_target) },
	{ 0x2e60bace, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x3cdd80a6, __VMLINUX_SYMBOL_STR(dev_mc_add) },
	{ 0x8bf826c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xa4eb4eff, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x32e8d68a, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xf84dbc49, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0x60689f49, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x78f9b710, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_try_module_get) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x47d5ab17, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xe1d45d3e, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0xd817d8f7, __VMLINUX_SYMBOL_STR(proc_remove) },
	{ 0x2579320, __VMLINUX_SYMBOL_STR(dev_mc_del) },
	{ 0x76ebea8, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0xb602c57e, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_module_put) },
	{ 0x59e2743e, __VMLINUX_SYMBOL_STR(call_rcu_bh) },
	{ 0x799aca4, __VMLINUX_SYMBOL_STR(local_bh_enable) },
	{ 0x4578661a, __VMLINUX_SYMBOL_STR(_atomic_dec_and_lock) },
	{ 0x3ff62317, __VMLINUX_SYMBOL_STR(local_bh_disable) },
	{ 0x75656c1e, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0x753ffa62, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x4d8ee16e, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x54a9db5f, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0x362ef408, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xeda36664, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0x439a4a19, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf5769951, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,nf_conntrack";


MODULE_INFO(srcversion, "D195979CAAD0C3499492E0C");
