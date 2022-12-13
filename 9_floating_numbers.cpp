#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	float float_number = 1.1234567789f; // precision: 7
	double double_number = 1.1234567789; // precision: 15
	long double long_double = 1.1234567789L; // more than 15 precision

	cout << setprecision(20);  // control the precision from std::cout
	cout << "float_number: " << float_number << " - size: " << sizeof(float_number) << endl;
	cout << "double_number: " << double_number << " - size: " << sizeof(double_number) << endl;
	cout << "long_double: " << long_double << " - size: " << sizeof(long_double) << endl;

	float narrow_conversion = 192400023.0f;
	cout << "narrow_conversion: " << narrow_conversion << endl; 

	double double_1 = 192400023;
	double double_2 = 1.92400023e8;
	double double_3 = 1924e8;
	double double_4 = 0.00000000003498;
	double double_5 = 3.498e-11;

	cout << "double_1: " << double_1 << endl;
	cout << "double_2: " << double_2 << endl;
	cout << "double_3: " << double_3 << endl;
	cout << "double_4: " << double_4 << endl;
	cout << "double_5: " << double_5 << endl;

	double double_6 = -5.6;
	double double_7 = 0;
	double double_8 = 0;

	double result = double_6 / double_7; // Infinity can be negative or positive (change value of double_6 to -5.6)
	cout << double_6 << " / " << double_7 << " = " << result << endl;
	cout << result << " + " << double_6 << " = " << result + double_6 << endl;

	result = double_7 / double_8; // NaN
	cout << double_7 << " / " << double_8 << " = " << result << endl;

	return 0;
}