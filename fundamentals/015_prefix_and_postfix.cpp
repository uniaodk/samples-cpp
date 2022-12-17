#include <iostream>

using namespace std;

int main() {

	int int_value {1};
	
	// Postfix increment
	cout << "on int_value++: " << int_value++ << endl; // 1
	cout << "after int_value++: " << int_value << endl; // 2

	// Postfix decrement
	cout << "on int_value--: " << int_value-- << endl; // 2
	cout << "after int_value--: " << int_value << endl; // 1

	// Prefix increment - save first value operation on variable
	cout << "on ++int_value: " << ++int_value << endl; // 2
	cout << "after ++int_value: " << int_value << endl; // 2

	// Prefix decrement
	cout << "on --int_value: " << --int_value << endl; // 1
	cout << "after --int_value: " << int_value << endl; // 1

	return 0;
}