cmd_net/core/netprio_cgroup.ko := ld -r -m elf_i386 -T /home/ccof-1/linux-lts-saucy-3.11.0/scripts/module-common.lds --build-id  -o net/core/netprio_cgroup.ko net/core/netprio_cgroup.o net/core/netprio_cgroup.mod.o