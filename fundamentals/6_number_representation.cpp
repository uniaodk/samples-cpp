#include <iostream>

using namespace std;

/*
	Types numeric representations
*/
int main() {
	int decimal = 15;
	int octal = 017;
	int hexadecimal = 0x0f;
	int binary = 0b00001111; // C++14

	cout << "Decimal: " << decimal << endl;
	cout << "Octal: " << octal << endl;
	cout << "Hexadecimal: " << hexadecimal << endl;
	cout << "Binary: " << binary << endl;
	
	return 0;
}