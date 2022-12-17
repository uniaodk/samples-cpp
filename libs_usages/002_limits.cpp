#include <iostream>
#include <limits>

using namespace std;

int main() {
	cout << "---- numeric_limits<T>:: min() | max() | lowest() ---" << endl << endl;
	cout << "short range: min: " << numeric_limits<short>::min() << " max: " << numeric_limits<short>::max() << endl;
	cout << "unsigned short range: min: " << numeric_limits<unsigned short>::min() << " max: " << numeric_limits<unsigned short>::max() << endl;
	cout << "int range: min: " << numeric_limits<int>::min() << " max: " << numeric_limits<int>::max() << endl;
	cout << "unsigned int range: min: " << numeric_limits<unsigned int>::min() << " max: " << numeric_limits<unsigned int>::max() << endl;
	cout << "long range: min: " << numeric_limits<long>::min() << " max: " << numeric_limits<long>::max() << endl;
	cout << "unsigned long range: min: " << numeric_limits<unsigned long>::min() << " max: " << numeric_limits<unsigned long>::max() << endl;
	cout << "float range: min: " << numeric_limits<float>::min() << " max: " << numeric_limits<float>::max() << endl;
	cout << "double range: min: " << numeric_limits<double>::min() << " max: " << numeric_limits<double>::max() << endl;

	return 0;
}