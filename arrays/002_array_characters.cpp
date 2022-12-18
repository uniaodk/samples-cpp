#include <iostream>

using namespace std;

int main() {

	cout << "---- array characters ----" << endl << endl;
	
	char message1[5] {'H', 'e', 'l', 'l', 'o'}; // becare declare 1 more index to null termination
	cout << "message1: " << message1 << " - sizeof: " << sizeof(message1) << endl;
	
	char message2[6] {'H', 'e', 'l', 'l', 'o', '\0'}; // null termination
	cout << "message2: " << message2 << " - sizeof: " << sizeof(message2) << endl;
	
	char message3[6] {'H', 'e', 'l', 'l', 'o'}; // null termination
	cout << "message3: " << message3 << " - sizeof: " << sizeof(message3) << endl;

	char message4[] {"Hello World!"}; // best initialize
	cout << "message4: " << message4 << " - sizeof: " << sizeof(message4) << endl;

	return 0;
}