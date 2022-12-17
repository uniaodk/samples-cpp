#include <iostream>

using namespace std;

int main() {

	int number_1 {2};
	int number_2 {7};

	// Addition 
	int result = number_1 + number_2;
	cout << "result: " << result << endl;

	// Subtraction - can return negative number
	result = number_1 - number_2;
	cout << "result: " << result << endl;

	result = number_2 - number_1;
	cout << "result: " << result << endl;

	// Multiplication
	result = number_1 * number_2;
	cout << "result: " << result << endl;

	// Division
	result = number_2 / number_1;
	cout << "result: " << result << endl;

	// Modulus can't be applied on floating numbers
	result = number_2 % number_1;
	cout << "result: " << result << endl;

	return 0;
}