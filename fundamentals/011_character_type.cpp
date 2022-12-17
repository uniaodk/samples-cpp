#include <iostream>

using namespace std;

int main() {
	char char_1 = 'A';
	char char_2 = 65; // ASCII numbers to represent caracters 0 - 256 diferentes values
	cout << "char_1: " << char_1 << " cast_int: " << static_cast<int>(char_1) << endl;
	cout << "char_2: " << char_2 << " cast_int: " << static_cast<int>(char_2) << endl;
	return 0;
}