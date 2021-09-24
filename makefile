main: main.o Node.o LinkedList.o ToDo.o
	g++ -std=c++11 main.o Node.o LinkedList.o ToDo.o -o main

main.o: main.cpp
	g++ -std=c++11 -c main.cpp

all:
	+$(MAKE) -c LinkedList
	+$(MAKE) -c Node
	+$(MAKE) -c ToDo

clean:
	rm *.o
	rm main

