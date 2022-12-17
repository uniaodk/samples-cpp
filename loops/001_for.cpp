#include <iostream>

using namespace std;

int main() {
	size_t COUNT = 10;
	cout << "---- for loops ----" << endl;
	
	// size_t = unsigned long long
	// ssize_t = long long
	for(size_t i {}; i < COUNT; i++) {
		cout << i << " - iterator" << endl;
	}

	return 0;
}