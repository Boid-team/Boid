make:

main: Object.o main.cpp
	clang++ Object.o main.cpp -lncurses -o "test"
	./test

Object.o: Object.h Object.cpp
	clang++ -c Object.h Object.cpp

Object.test: Object.o testingObject.cpp
	clang++ Object.o testingObject.cpp -lncurses -o "test"
	./test

Fish.o: Object.cpp Fish.cpp
	clang++ -c Object.cpp Fish.cpp

Fish.test: 
	clang++ Object.o Fish.o FishTest.cpp

Bird.o: Object.cpp Bird.cpp
	clang++ -c Object.cpp Bird.cpp

Bird.test:
	clang++ Bird.o BirdTest.cpp