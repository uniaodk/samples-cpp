#include <iostream>

using namespace std;

/* 
	Using function
*/
int addNumbers(int a, int b) {
	return a + b;
}

int main() {
	int numberA {6};
	int numberB {4};
	cout << "Number A: " << numberA << endl;
	cout << "Number B: " << numberB << endl;
	cout << "Sum: " << addNumbers(numberA, numberB) << endl;

	return 0;
};