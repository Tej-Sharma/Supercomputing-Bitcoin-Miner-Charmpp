CHARMDIR = /home/tejas/research/charm-v6.10.2
CHARMC = $(CHARMDIR)/bin/charmc $(OPTS)

all: miner
default: all

miner : main.o miner.o
	   $(CHARMC) -language charm++ -o miner main.o miner.o

main.o : main.C main.h main.decl.h main.def.h miner.decl.h
	   $(CHARMC) -o main.o main.C

main.decl.h main.def.h : main.ci
	   $(CHARMC) main.ci

miner.o : miner.C miner.h miner.decl.h miner.def.h main.decl.h
	   $(CHARMC) -o miner.o miner.C

miner.decl.h miner.def.h : miner.ci
	   $(CHARMC) miner.ci

clean:
	   rm -f main.decl.h main.def.h main.o
	      rm -f miner.decl.h miner.def.h miner.o
	         rm -f miner charmrun
