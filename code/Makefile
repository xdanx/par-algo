euler: euler.o mystery.o
	g++ euler.o mystery.o -o euler

euler.o: euler.cpp mystery.h
	g++ -std=c++11 -Wall -c euler.cpp

par-euler: par-euler.cpp mystery.o
	mpic++ -std=c++11 -Wall par-euler.cpp mystery.o -o par-euler

run-par-euler: par-euler
	mpiexec -machinefile hosts -np ${PROCS} ./par-euler ${ARGS}

mystery_impl: mystery_impl.cpp mystery.o
	g++ -Wall mystery_impl.cpp mystery.o -o mystery_impl

clean: 
	rm -f euler.o euler par-euler par-euler.o
