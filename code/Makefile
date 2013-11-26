euler: euler.o mystery.o
	clang++ euler.o mystery.o -o euler

euler.o: euler.cpp mystery.h
	clang++ -std=c++11 -Wall -c euler.cpp

par-euler: par-euler.cpp mystery.o
	mpic++ -std=c++11 -Wall par-euler.cpp mystery.o -o par-euler

run-par-euler: par-euler
	mpiexec -machinefile hosts -np 13 ./par-euler

clean: 
	rm -f euler.o euler par-euler par-euler.o
