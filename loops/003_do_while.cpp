#include <iostream>

using namespace std;

const size_t COUNT {10};

int main() {
	size_t i {11};

	cout << "---- do while ----" << endl; // run once at least
	do {
		cout << i << " - iterator" << endl;
		i++;
	} while (i < COUNT);

	return 0;
}