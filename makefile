all: lab
	./lab map.txt

lab: lab.o GameBoard.o
	g++ -o lab lab.o GameBoard.o

lab.o: lab.c++
	g++ -std=c++23 -c lab.c++

GameBoard.o: GameBoard.c++ GameBoard.h
	g++ -std=c++23 -c GameBoard.c++

clean:
	rm -f *.o lab

.PHONY: all clean

