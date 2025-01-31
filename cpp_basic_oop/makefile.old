game: main.o car.o critter.o
	g++ main.o car.o critter.o -o game

main.o: main.cpp car.h critter.h
	g++ -c main.cpp

car.o: car.cpp car.h critter.h
	g++ -c car.cpp

critter.o: critter.cpp critter.h
	g++ -c critter.cpp

clean: 
	rm *.o
	rm game

run:	game
	./game
