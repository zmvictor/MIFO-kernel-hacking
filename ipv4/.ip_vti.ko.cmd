cmd_net/ipv4/ip_vti.ko := ld -r -m elf_i386 -T /home/ccof-1/linux-lts-saucy-3.11.0/scripts/module-common.lds --build-id  -o net/ipv4/ip_vti.ko net/ipv4/ip_vti.o net/ipv4/ip_vti.mod.o
