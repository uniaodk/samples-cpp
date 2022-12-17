#include <iostream>

using namespace std;

const size_t COUNT {10};

int main() {
	size_t i {0};

	cout << "---- while ----" << endl;
	while (i < COUNT) {
		cout << i << " - iterator" << endl;
		i++;
	}

	return 0;
}