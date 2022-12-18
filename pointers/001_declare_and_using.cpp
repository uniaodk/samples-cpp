#include <iostream>

using namespace std;

int main() {
	int *p_int {}; // only can store address of variable of type int
	double *p_double {}; // only doubles, will initialize with nullptr

	// declare initialize null pointer explicity
	int *p_int1 {nullptr}; // preference to always declare * together to variable
	double *p_double1 {nullptr};

	cout << "---- pointers always consume 8 bites ----" << endl;
	cout << "sizeof(p_int): " << sizeof(p_int) << endl;
	cout << "sizeof(p_double): " << sizeof(p_double) << endl << endl;
	
	cout << "---- assignment address to pointer ----" << endl;
	int int_var {43};
	p_int = &int_var;
	cout << "p_int address: " << p_int << endl;
	cout << "p_int value: " << *p_int << endl << endl;

	return 0;
}