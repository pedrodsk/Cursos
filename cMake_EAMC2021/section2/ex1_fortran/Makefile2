### C/C++
CC=g++
CFLAGS=-std=c++11

### Fortran
FC=gfortran
FFLAGS=

# LINKER=g++
# LFLAGS=-lgfortran

LINKER=gfortran
LFLAGS=-lstdc++

BIN=ex1_fortran

BINDIR=bin
BUILDDIR=build
SRCDIR=src




all: mkdir_folder
	echo "Clausula all"
	$(CC) $(CFLAGS) -c $(SRCDIR)/main.cpp -o $(BUILDDIR)/main.o
	$(FC) $(FFLAGS) -c $(SRCDIR)/compute.f -o $(BUILDDIR)/compute.o
	$(LINKER) $(LFLAGS) $(BUILDDIR)/main.o $(BUILDDIR)/compute.o -o $(BINDIR)/$(BIN)

clean:
	echo "Clausula clean"
	rm -rf $(BUILDDIR)
	rm -rf $(BINDIR)

mkdir_folder:
	mkdir -p $(BINDIR)
	mkdir -p $(BUILDDIR)
