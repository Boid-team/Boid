make:

main: Object.o Bird.o Fish.o main.cpp
	clang++ Object.o Bird.o Fish.o main.cpp -lncurses -o "main"

main.test: main
	./main

Object.o: Object.h Object.cpp
	clang++ -c Object.h Object.cpp

Object: Object.o testingObject.cpp
	clang++ Object.o testingObject.cpp -lncurses -o "Objtest"

Object.test: Object.o Object
	./Objtest

Fish.o: Object.cpp Fish.cpp
	clang++ -c Object.cpp Fish.cpp

Fish: Object.o Fish.o FishTest.cpp
	clang++ Object.o Fish.o FishTest.cpp -lncurses -o "FishTest"

Fish.test: Fish
	bash FishTestScript

Bird.o: Object.cpp Bird.cpp
	clang++ -c Object.cpp Bird.cpp

Bird: Object.o Bird.o BirdTest.cpp
	clang++ Object.o Bird.o BirdTest.cpp -lncurses -o "BirdTest"

Bird.test: Bird
	bash BirdTestScript

Functions:
	clang++ Object.o Bird.o FunctionTest.cpp -lncurses -o "FunctionTest"

Functions.test:
	./FunctionTest

SubFunctions: SubFunctionsTest.cpp
	clang++ Object.o Bird.o SubFunctionsTest.cpp -o "SubFunctionTest"

SubFunctions.test:
	bash SubFunctionTestScript

PointerTest: Object.o Fish.o Bird.o FunctionTest.cpp
	clang++ Object.o Fish.o Bird.o PointerTest.cpp -lncurses -o "PointerTest"

PointerTest.test:
	./PointerTest

InputTest: Object.o Functions.cpp InputTest.cpp
	clang++ Object.o InputTest.cpp -o "InputTest"

InputTest.test: InputTest
	bash InputTestScript