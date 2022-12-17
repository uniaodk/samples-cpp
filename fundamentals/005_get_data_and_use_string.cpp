#include <iostream>
#include <string>

using namespace std;

/*
	Its necessary to include <string>
*/
int main() {
	int age;
	string name, full_name;

	cout << "Please type your name and age: " << endl;

	// Get Data with spaces, must be first
	getline(cin, full_name);

	cin >> name >> age;

	cout << "Your full name is " << full_name << endl;
	cout << "Hello " << name << " you are " << age << " years old!" << endl;

	return 0;
}