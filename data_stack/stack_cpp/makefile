stackDemo: node.o stack.o main.o
	g++ -g node.o stack.o main.o -o stackDemo

main.o: main.cpp node.h stack.h
	g++ -g -c main.cpp

stack.o: stack.cpp stack.h node.h
	g++ -g -c stack.cpp

node.o: node.h node.cpp
	g++ -g -c node.cpp

run: stackDemo
	./stackDemo

clean:
	rm *.o
	rm stackDemo

debug: stackDemo
	gdb stackDemo

valgrind: stackDemo
	valgrind --leak-check=full ./stackDemo

