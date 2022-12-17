#include <iostream>

using namespace std;

int main() {
	int a {1};
	int b {2};
	int c {3};

	cout << "---- if ----" << endl;
	if (a > b) 
		cout << "if (a > b) condition is true" << endl << endl;
	if (a < b) 
		cout << "if (a < b) condition is true" << endl << endl;

	cout << "---- if else ----" << endl; // always needs to use with if
	if (b > c) 
		cout << "if (b > c) condition is true" << endl << endl;
	else {
		cout << "else condition only accepted" << endl;
		if (a > c) {
			cout << "nested if (a > c) condition is true" << endl << endl;
		} else {
			cout << "nested else condition only accepted" << endl << endl;
		}
	}

	cout << "---- else if ----" << endl;
	if (a > b) {
		cout << "if (a > b) condition is true" << endl << endl;
	} else if (c > b) {
		cout << "if (c > b) condition is true" << endl << endl;
	} else {
		cout << "else condition only accepted" << endl << endl;
	}

	return 0;
}