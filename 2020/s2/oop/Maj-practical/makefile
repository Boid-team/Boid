make:

main: Object.o main.cpp
	clang++ Object.o main.cpp -lncurses -o "test"
	./test

Object.o: Object.h Object.cpp
	clang++ -c Object.h Object.cpp

Object.test: Object.o testingObject.cpp
	clang++ Object.o testingObject.cpp -o "test"
	./test


