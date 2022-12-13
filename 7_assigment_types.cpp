#include <iostream>

using namespace std;

/* 
	Types of assigment variables (Brace, Function and Assigent)
*/
int main() {
	int elephant_count; // variable may contain random garbage value
	int lion_count {}; // Brace initializes to zero
	int dog_count {10};  // Brace initializes to 10
	int cat_count (2); // Function initializes to 2
	int domestict_count = dog_count + cat_count; // Assigment initializes

	cout << "elephant_count: " << elephant_count << endl;
	cout << "lion_count: " << lion_count << endl;
	cout << "dog_count: " << dog_count << endl;
	cout << "cat_count: " << cat_count << endl;
	cout << "domestict_count: " << domestict_count << endl;

	// check the size fit on memory with sizeof - int 4 bit
	cout << "sizeof domestict_count: " << sizeof(domestict_count) << endl;
	cout << "sizeof dog_count: " << sizeof(dog_count) << endl;
	
	return 0;
}
