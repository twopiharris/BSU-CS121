CritterDemo: Critter.o main.o
	g++ Critter.o main.o -o CritterDemo

Critter.o: Critter.cpp Critter.h
	g++ -c Critter.cpp

main.o: main.cpp Critter.h
	g++ -c main.cpp

run: CritterDemo
	./CritterDemo

clean:
	rm CritterDemo
	rm *.o

