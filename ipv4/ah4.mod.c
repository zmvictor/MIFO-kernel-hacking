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
	{ 0x8a2c9278, __VMLINUX_SYMBOL_STR(inet_del_protocol) },
	{ 0xcfa7ba7a, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0xd006412f, __VMLINUX_SYMBOL_STR(inet_add_protocol) },
	{ 0x85e652bf, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0xd0bced8d, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0x17c5f8b8, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0xe1409be8, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0xb6db590e, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe122af95, __VMLINUX_SYMBOL_STR(xfrm_aalg_get_byname) },
	{ 0x6fe4c12c, __VMLINUX_SYMBOL_STR(crypto_ahash_setkey) },
	{ 0x8b972616, __VMLINUX_SYMBOL_STR(crypto_alloc_ahash) },
	{ 0x439a4a19, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf5769951, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x393fd098, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xf236fc3c, __VMLINUX_SYMBOL_STR(xfrm_input_resume) },
	{ 0x991928f3, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x5152e605, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xebeb829f, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x2ec95611, __VMLINUX_SYMBOL_STR(xfrm_output_resume) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x300ec9a7, __VMLINUX_SYMBOL_STR(crypto_ahash_digest) },
	{ 0xab038920, __VMLINUX_SYMBOL_STR(skb_to_sgvec) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x2e60bace, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf1ad4909, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xf6e2d2fa, __VMLINUX_SYMBOL_STR(skb_cow_data) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x2bc95bd4, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xfrm_algo";


MODULE_INFO(srcversion, "2379C9EE2283DB2957FE64B");
