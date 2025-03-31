llCPP: main.o node.o linkedList.o
	g++ main.o node.o linkedList.o -g -o llCPP

main.o: main.cpp node.h
	g++ -g -c main.cpp

node.o: node.h node.cpp
	g++ -g -c node.cpp

linkedList.o: node.h linkedList.h linkedList.cpp
	g++ -g -c linkedList.cpp

clean:
	rm llCPP
	rm *.o

run: llCPP
	./llCPP

debug: llCPP
	gdb ./llCPP

valgrind: llCPP
	valgrind --leak-check=full ./llCPP


