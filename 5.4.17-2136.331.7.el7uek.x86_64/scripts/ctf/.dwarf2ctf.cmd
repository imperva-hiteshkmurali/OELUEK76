cmd_scripts/ctf/dwarf2ctf := gcc   -o scripts/ctf/dwarf2ctf scripts/ctf/dwarf2ctf.o scripts/ctf/eu_simple.o scripts/ctf/modules_thick.o   -ldtrace-ctf -lelf -ldw -lglib-2.0   -lz
