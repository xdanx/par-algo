start: start.o mystery.o
	g++ start.o mystery.o -o start

start.o: start.cpp
	g++ -Wall -c start.cpp serial/euler_algorithm_serial.h serial/euler_algorithm_serial.cpp 

clean: 
	rm -f start.o euler_algorithm_serial.o start 