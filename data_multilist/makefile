multiDemo: main.o famNode.o personNode.o
	g++ -g main.o famNode.o personNode.o -o multiDemo

main.o: famNode.h personNode.h main.cpp
	g++ -g -c main.cpp

famNode.o: famNode.cpp famNode.h personNode.h
	g++ -g -c famNode.cpp

personNode.o: personNode.cpp personNode.cpp
	g++ -g -c personNode.cpp

run: multiDemo
	./multiDemo

clean:
	rm *.o
	rm multiDemo

debug: multiDemo
	gdb multiDemo


