#include <iostream>

using namespace std;

/*
	Auto alocated memory to variables
*/
int main() {

	// Careful about initialize auto values, if you will assign with somenting
	auto auto_int = 12;
	auto auto_double = 13.0;
	auto auto_float = 14.0f;
	auto auto_long = 15.0l;
	auto auto_char = 'e';
	auto auto_boolean = true;
	
	// int modifier suffixes
	auto auto_unsigned = 123u;
	auto auto_unsigned_long = 123ul;
	auto auto_long_long = 123ll;

	cout << "auto_int: " << auto_int << " sizeof: " << sizeof(auto_int) << endl;
	cout << "auto_double: " << auto_double << " sizeof: " << sizeof(auto_double) << endl;
	cout << "auto_boolean: " << auto_boolean << " sizeof: " << sizeof(auto_boolean) << endl;
	cout << "auto_float: " << auto_float << " sizeof: " << sizeof(auto_float) << endl;
	cout << "auto_long: " << auto_long << " sizeof: " << sizeof(auto_long) << endl;
	cout << "auto_char: " << auto_char << " sizeof: " << sizeof(auto_char) << endl;
	cout << "auto_unsigned: " << auto_unsigned << " sizeof: " << sizeof(auto_unsigned) << endl;
	cout << "auto_unsigned_long: " << auto_unsigned_long << " sizeof: " << sizeof(auto_unsigned_long) << endl;
	cout << "autauto_long_longo_int: " << auto_long_long << " sizeof: " << sizeof(auto_long_long) << endl;

	// try to change value unsigned variable

	auto_unsigned = -123; // will get inconsistent value because the memory alocated
	cout << "auto_unsigned: " << auto_unsigned << endl;

	return 0;
}