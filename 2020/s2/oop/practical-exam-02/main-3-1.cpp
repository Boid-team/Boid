#include <iostream>
using namespace std;

extern int *createArray(int);
extern void displayArray(int*, int);
extern int winningPowerBall(int*, int);

int main(){
	int *array = createArray(4);

	cout << "The winning PowerBall: " << winningPowerBall(array, 4) << endl;

	delete[] array;
}