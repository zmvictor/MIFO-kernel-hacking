cmd_net/ipv4/ip_tunnel.ko := ld -r -m elf_i386 -T /home/ccof-1/linux-lts-saucy-3.11.0/scripts/module-common.lds --build-id  -o net/ipv4/ip_tunnel.ko net/ipv4/ip_tunnel.o net/ipv4/ip_tunnel.mod.o
