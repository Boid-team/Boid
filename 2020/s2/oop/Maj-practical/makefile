make:

main: Object.o main.cpp
	clang++ Object.o main.cpp -lncurses -o "main"

main.test:
	./main

Object.o: Object.h Object.cpp
	clang++ -c Object.h Object.cpp

Object: Object.o testingObject.cpp
	clang++ Object.o testingObject.cpp -lncurses -o "Objtest"

Object.test:
	./Objtest

Fish.o: Object.cpp Fish.cpp
	clang++ -c Object.cpp Fish.cpp

Fish:
	clang++ Object.o Fish.o FishTest.cpp -lncurses -o "FishTest"

Fish.test:
	./FishTest

Bird.o: Object.cpp Bird.cpp
	clang++ -c Object.cpp Bird.cpp

Bird:
	clang++ Object.o Bird.o BirdTest.cpp -lncurses -o "BirdTest"

Bird.test:
	bash BirdTestScript

Functions:
	clang++ Object.o Bird.o FunctionTest.cpp -lncurses -o "FunctionTest"

Functions.test:
	./FunctionTest