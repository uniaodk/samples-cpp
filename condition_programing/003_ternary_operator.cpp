#include <iostream>

using namespace std;

int main() {
	int a {1};
	int b {2};
	int result = {};

	cout << "---- with if and else ----" << endl;
	if (a > b) 
		result = a;
	else 
		result = b;
	cout << "max between a and b is: " << result << endl << endl;
	
	cout << "---- ternary operator ----" << endl;
	// its same way if use like that
	result = (a > b) ? a : b;
	cout << "max between a and b is: " << result << endl;

	return 0;
}