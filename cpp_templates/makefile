sortDemo: critter.o sortCritter.o
	g++ critter.o sortCritter.o -o sortDemo

critter.o: critter.h critter.cpp
	g++ -c critter.cpp

sortCritter.o: critter.h sortCritter.cpp
	g++ -c sortCritter.cpp

clean:
	rm *.o
	rm sortDemo

run: sortDemo
	./sortDemo

