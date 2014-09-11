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
	{ 0xe3493522, __VMLINUX_SYMBOL_STR(tcp_vegas_get_info) },
	{ 0x30df20e8, __VMLINUX_SYMBOL_STR(tcp_vegas_cwnd_event) },
	{ 0xcaff03a1, __VMLINUX_SYMBOL_STR(tcp_vegas_state) },
	{ 0xf2bdcc5b, __VMLINUX_SYMBOL_STR(tcp_reno_min_cwnd) },
	{ 0x8165d565, __VMLINUX_SYMBOL_STR(tcp_unregister_congestion_control) },
	{ 0xc226d92e, __VMLINUX_SYMBOL_STR(tcp_register_congestion_control) },
	{ 0xff9e5b36, __VMLINUX_SYMBOL_STR(tcp_cong_avoid_ai) },
	{ 0x46a9ec34, __VMLINUX_SYMBOL_STR(tcp_slow_start) },
	{ 0x578a020a, __VMLINUX_SYMBOL_STR(tcp_is_cwnd_limited) },
	{ 0x77d09487, __VMLINUX_SYMBOL_STR(tcp_vegas_init) },
	{ 0xb383a344, __VMLINUX_SYMBOL_STR(tcp_vegas_pkts_acked) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tcp_vegas";


MODULE_INFO(srcversion, "5614C869E58C5A944B682A4");
