CC = g++ -std=c++11

Car: main.o Car.o Vehicle.o
	$(CC) main.o Car.o Vehicle.o -o Car

main.o: main.cpp Car.cpp Vehicle.cpp
	$(CC) -c main.cpp

Car.o: Car.cpp Vehicle.cpp
	$(CC) -c Car.cpp

Vehicle.o: Vehicle.cpp
	$(CC) -c Vehicle.cpp

run: Car
	./Car

clean:
	rm *.o
	rm Car


