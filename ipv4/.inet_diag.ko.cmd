cmd_net/ipv4/inet_diag.ko := ld -r -m elf_i386 -T /home/ccof-1/linux-lts-saucy-3.11.0/scripts/module-common.lds --build-id  -o net/ipv4/inet_diag.ko net/ipv4/inet_diag.o net/ipv4/inet_diag.mod.o
