#include <iostream>

using namespace std;

int main() {
	int signed_int = {1}; // or signed int is the same
	unsigned int unsigned_int = -1; // accept negative number, but back to max value
	cout << "unsigned_int: " << unsigned_int << " - size: " << sizeof(unsigned_int) << endl;
	cout << "signed_int" << signed_int << " - size: " << sizeof(signed_int) << endl;

	short short_int = 1;
	short unsigned short_unsigned = -1;
	cout << "short_int: " << short_int << " - size: " << sizeof(short_int) << endl;
	cout << "short_unsigned: " << short_unsigned << " - size: " << sizeof(short_unsigned) << endl;
	
	long long_int = 1;
	long unsigned long_unsigned = -1;
	cout << "long_int: " << long_int << " - size: " << sizeof(long_int) << endl;
	cout << "long_unsigned: " << long_unsigned << " - size: " << sizeof(long_unsigned) << endl;

	long long long_long_int = 1;
	long long unsigned long_long_unsigned = -1;
	cout << "long_long_int: " << long_long_int << " - size: " << sizeof(long_long_int) << endl;
	cout << "long_long_unsigned: " << long_long_unsigned << " - size: " << sizeof(long_long_unsigned) << endl;

	return 0;
}
