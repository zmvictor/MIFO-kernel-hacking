cmd_net/core/pktgen.ko := ld -r -m elf_i386 -T /home/ccof-1/linux-lts-saucy-3.11.0/scripts/module-common.lds --build-id  -o net/core/pktgen.ko net/core/pktgen.o net/core/pktgen.mod.o
