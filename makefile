main: main.o Node.o LinkedList.o ToDo.o
	g++ -std=c++11 main.o Node.o LinkedList.o ToDo.o -o main

main.o: main.cpp
	g++ -std=c++11 -c main.cpp

Node.o: LinkedList/Node/Node.h LinkedList/Node/Node.cpp
	g++ -std=c++11 -c LinkedList/Node/Node.cpp

LinkedList.o: LinkedList/LinkedList.h LinkedList/LinkedList.cpp LinkedList/ListInterface.h
	g++ -std=c++11 -c LinkedList/LinkedList.cpp

ToDo.o: ToDo/ToDo.h ToDo/ToDo.cpp
	g++ -std=c++11 -c ToDo/ToDo.cpp

clean:
	rm *.o
	rm main

