#include <iostream>

using namespace std;

int main() {
	short int var1 {10}; // 2 bytes
	short int var2 {20};

	char var3 {40}; // 1 byte
	char var4 {50};

	cout << "size of var1: " << sizeof(var1) << " value: " << var1 << endl;
	cout << "size of var2: " << sizeof(var2) << " value: " << var2 << endl;
	cout << "size of var3: " << sizeof(var3) << " value: " << var3 << endl;
	cout << "size of var4: " << sizeof(var4) << " value: " << var4 << endl;
	
	auto result1 = var1 + var2;
	auto result2 = var3 + var4; // convert to int

	cout << "size of result1: " << sizeof(result1) << " value: " << result1 << endl;
	cout << "size of result2: " << sizeof(result2) << " value: " << result2 << endl;
	
	return 0;
}