### C/C++
CC=g++
CFLAGS=-std=c++11 -DUSE_OPENMP


LINKER=g++
LFLAGS=-lgomp

BIN=ex2_omp

all:
	echo "Clausula all"
	$(CC) $(CFLAGS) -c src/main.cpp
	$(LINKER) $(LFLAGS) main.o -o $(BIN)

clean:
	echo "Clausula clean"
	rm -f *.o
	rm -f $(BIN)

