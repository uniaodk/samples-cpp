#include <iostream>

using namespace std;

int main() {
	const char *p_message {"Hello World!"}; // must be const if declare array char as pointer
	// to prevent this type compile error 
	// *message = 'B';
	cout << "p_message: " << p_message << endl;
	cout << "*p_message: " << *p_message << endl; // point to first character the message

	return 0;
}