bin/prog1: prog1.o ./lib/functions.a
	g++ -o bin/prog1 prog1.o ./lib/functions.a

prog1.o: ./src/prog1.cc ./include/functions.h functions.a
	g++ -c ./src/prog1.cc

functions.a: functions.o
	ar rvs functions.a functions.o
	mv functions.a ./lib/functions.a

functions.o: ./src/functions.cc ./include/functions.h
	g++ -c ./src/functions.cc
