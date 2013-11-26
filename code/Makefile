euler: euler.o mystery.o
	clang++ euler.o mystery.o -o euler

euler.o: euler.cpp mystery.h
	clang++ -std=c++11 -Wall -c euler.cpp


clean: 
	rm -f euler.o euler 
