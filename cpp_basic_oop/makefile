game: critter.o car.o main.o
	g++ -g critter.o car.o main.o -o game

main.o: critter.h car.h main.cpp
	g++ -c -g main.cpp

critter.o: critter.h critter.cpp
	g++ -c -g critter.cpp

car.o: critter.h car.h car.cpp
	g++ -c -g car.cpp

clean:
	rm *.o
	rm game

run: game
	./game

debug: game
	gdb game

