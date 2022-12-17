#include <iostream>

using namespace std;

int main() {
	int value {45};
	cout <<  "value: " << value << endl;
	
	value += 5; // equivalent to value = value + 5
	cout << "value += 5: " << value << endl;

	value -= 5; // equivalent to value = value - 5
	cout << "value -= 5: " << value << endl;

	value *= 2; // equivalent to value = value * 2
	cout << "value *= 2: " << value << endl;

	value /= 3; // equivalent to value = value / 3
	cout << "value /= 3: " << value << endl;

	value %= 11; // equivalent to value = value % 11
	cout << "value %= 11: " << value << endl;

	return 0;
}