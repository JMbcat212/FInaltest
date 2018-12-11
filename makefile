CC= g++
CFLAGS = -c

all: build

clean:
	-rm *.o
	-rm mancala
	-rm *.out

build: 
	$(CC) $(CFLAGS) *.cc
	$(CC) -o count *.o

doc:
	doxygen .
