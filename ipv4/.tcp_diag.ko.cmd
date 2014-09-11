cmd_net/ipv4/tcp_diag.ko := ld -r -m elf_i386 -T /home/ccof-1/linux-lts-saucy-3.11.0/scripts/module-common.lds --build-id  -o net/ipv4/tcp_diag.ko net/ipv4/tcp_diag.o net/ipv4/tcp_diag.mod.o
