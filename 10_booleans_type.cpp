#include <iostream>

using namespace std;

int main() {
	bool red_light = true;

	if (red_light) {
		cout << "Stop!" << endl;
	} else {
		cout << "Go through!" << endl;
	}

	// show 0 as false and 1 as true
	cout << "red_light: " << red_light << " - size: " << sizeof(red_light) << endl;
 
 	// change boolean cout to true/false
	cout << boolalpha; 
	cout << "red_light: " << red_light << " - size: " << sizeof(red_light) << endl;
	return 0;
}