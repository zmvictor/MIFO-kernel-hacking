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
	{ 0x94e8885f, __VMLINUX_SYMBOL_STR(nf_nat_used_tuple) },
	{ 0xf038566e, __VMLINUX_SYMBOL_STR(nf_nat_l4proto_register) },
	{ 0xea729689, __VMLINUX_SYMBOL_STR(inet_proto_csum_replace4) },
	{ 0xd03c7700, __VMLINUX_SYMBOL_STR(secure_ipv4_port_ephemeral) },
	{ 0x47d14fdc, __VMLINUX_SYMBOL_STR(nf_ip_checksum) },
	{ 0x388999d, __VMLINUX_SYMBOL_STR(skb_checksum) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
	{ 0xd9bae4b, __VMLINUX_SYMBOL_STR(nf_nat_l4proto_nlattr_to_range) },
	{ 0x9af74e4d, __VMLINUX_SYMBOL_STR(nf_nat_l4proto_unregister) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4a528acf, __VMLINUX_SYMBOL_STR(skb_make_writable) },
	{ 0xebcf68ab, __VMLINUX_SYMBOL_STR(nf_nat_l3proto_unregister) },
	{ 0x7d50a24, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0xd7b6cb2f, __VMLINUX_SYMBOL_STR(nf_nat_l3proto_register) },
	{ 0xcab02ecb, __VMLINUX_SYMBOL_STR(__nf_nat_l4proto_find) },
	{ 0x90ff6c9f, __VMLINUX_SYMBOL_STR(nf_ct_invert_tuplepr) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_nat,nf_conntrack";


MODULE_INFO(srcversion, "9BCA43655944950D48DC60F");
