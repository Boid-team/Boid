# Boids in c++
An implementation of the boid algorithm in c++ with ncurses for a school project.


## Installation
This project should run on any Unix based system easily with makefile, windows is slightly more annoying since you'll need 
to compile everything together. Compile the code with "make main", "make main.run" compiles and automatically runs the program. The code runs inside the terminal, so it doesn't require any other stuff besides the ncurses library.

Everything else in the makefile is just testing stuff, run them if you want.

## Usage
Compiled with clang
```bash
clang++ Object.cpp Bird.cpp Fish.cpp main.cpp -lncurses -o "Boids"
```

## Authors and acknowledgment
Written by Josiah and Collins at the University of Adelaide

Thanks to Destin from SmarterEveryDay and Ben Eater on youtube for the inspiration behind this project

## license
[MIT](https://choosealicense.com/licenses/mit/)
