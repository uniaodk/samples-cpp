#include <iostream>

using namespace std;

int main() {
	int scores[5] { 5, 4, 3, 2, 1 };

	cout << "---- size array ----" << endl;
	cout << "sizeof(scores): " << sizeof(scores) << endl;
	cout << "sizeof(socores[0]): " << sizeof(scores[0]) << endl;
	cout << "size(scores): " << size(scores) << endl << endl;

	cout << "---- reading array ----" << endl;
	for(size_t i {0}; i < size(scores); i++) {
		cout << "score[" << i << "]: " << scores[i] << endl;
	}

	cout << endl << "---- reading array 2 ----" << endl;
	for(int score : scores) {
		cout << "score: " << score << endl;
	}

	cout << endl << "---- assign array ----" << endl;
	for(size_t i {0}; i < size(scores); i++) {
		scores[i] = i;
	}

	for(int score : scores) {
		cout << "score: " << score << endl;
	}

	return 0;
}