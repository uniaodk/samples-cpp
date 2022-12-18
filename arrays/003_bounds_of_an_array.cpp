#include <iostream>

using namespace std;

int main() {
	int numbers[] {1,2,3,4,5,6,7,8,9,0}; // size 10

	cout << "---- read beyond bounds ----" << endl;
	// will read garbage or crash your program
	cout << "numbers[12]: " << numbers[12] << endl << endl;

	cout << "---- write beyond bounds ----" << endl;
	// will write on other parts your program may corrupt the system
	// CAUTION
	numbers[12] = 1000;
	cout << "numbers[12]: " << numbers[12] << endl << endl;

	return 0;
}