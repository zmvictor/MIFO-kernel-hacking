cmd_net/ipv4/tcp_lp.ko := ld -r -m elf_i386 -T /home/ccof-1/linux-lts-saucy-3.11.0/scripts/module-common.lds --build-id  -o net/ipv4/tcp_lp.ko net/ipv4/tcp_lp.o net/ipv4/tcp_lp.mod.o
