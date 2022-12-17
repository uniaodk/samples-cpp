#include <iostream>

using namespace std;

int main() {

	int number_1 {45};
	int number_2 {60};

	cout << boolalpha;
	cout << "number_1 < number_2: " << (number_1 < number_2) << endl;
	cout << "number_1 <= number_2: " << (number_1 <= number_2) << endl;
	cout << "number_1 > number_2: " << (number_1 > number_2) << endl;
	cout << "number_1 >= number_2: " << (number_1 >= number_2) << endl;
	cout << "number_1 == number_2: " << (number_1 == number_2) << endl;
	cout << "number_1 != number_2: " << (number_1 != number_2) << endl;

	cout << noboolalpha;
	cout << "number_1 < number_2: " << (number_1 < number_2) << endl;
	cout << "number_1 <= number_2: " << (number_1 <= number_2) << endl;
	cout << "number_1 > number_2: " << (number_1 > number_2) << endl;
	cout << "number_1 >= number_2: " << (number_1 >= number_2) << endl;
	cout << "number_1 == number_2: " << (number_1 == number_2) << endl;
	cout << "number_1 != number_2: " << (number_1 != number_2) << endl;

	return 0;
}