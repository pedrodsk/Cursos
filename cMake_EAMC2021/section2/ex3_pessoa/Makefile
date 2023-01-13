### C/C++
CC=g++
CFLAGS=-std=c++11 -Iinclude

LINKER=g++

BIN=ex3_pessoa

BINDIR=bin
BUILDDIR=build
SRCDIR=src

OBJS=$(BUILDDIR)/data.o $(BUILDDIR)/pessoa.o $(BUILDDIR)/cliente.o $(BUILDDIR)/main.o

all: mkdir_folder 
	$(CC) $(CFLAGS) -c $(SRCDIR)/main.cpp -o $(BUILDDIR)/main.o
	$(CC) $(CFLAGS) -c $(SRCDIR)/data.cpp -o $(BUILDDIR)/data.o
	$(CC) $(CFLAGS) -c $(SRCDIR)/pessoa.cpp -o $(BUILDDIR)/pessoa.o
	$(CC) $(CFLAGS) -c $(SRCDIR)/cliente.cpp -o $(BUILDDIR)/cliente.o
	$(LINKER) $(LFLAGS) $(OBJS) -o $(BINDIR)/$(BIN)

clean:
	rm -f *.o
	rm -f *.mod
	rm -f $(BIN)

mkdir_folder:
	mkdir -p $(BINDIR)
	mkdir -p $(BUILDDIR)

