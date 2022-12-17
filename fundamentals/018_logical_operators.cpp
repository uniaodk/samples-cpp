#include <iostream>

using namespace std;

int main() {
	bool a {true};
	bool b {false};
	bool c {true};

	cout << boolalpha;
	cout << "Basic AND operations" << endl;
	cout << "a && b: " << (a && b) << endl;
	cout << "a && c: " << (a && c) << endl;
	cout << "a && b && c: " << (a && b && c) << endl << endl;
	
	cout << "Basic OR operations" << endl;
	cout << "a || b: " << (a || b) << endl;
	cout << "a || c: " << (a || c) << endl;
	cout << "a || b || c: " << (a || b || c) << endl << endl;

	cout << "Basic NOT operations" << endl;
	cout << "!a: " << !a << endl;
	cout << "!b: " << !b << endl;
	cout << "!c: " << !c << endl << endl;

	cout << "Combine logical operations in expression" << endl;
	cout << "!(a && b) || c: " << (!(a && b) || c) << endl << endl;

	int d {45};
	int e {20};
	int f {11};

	cout << "Relational and logic operations on integers" << endl;

	cout << "(d > e) && (d > f): " << ((d > e) && (d > f)) << endl;
	cout << "(d == e) || (d <= f): " << ((d == e) || (d <= f)) << endl;
	cout << "(d < e) || (d > f): " << ((d < e) || (d > f)) << endl;
	cout << "(f > e) || (d < f): " << ((f > e) || (d < f)) << endl;
	cout << "(d > f) && (f <= d): " << ((d > f) && (f <= d)) << endl;
	cout << "(d > e) && (d <= f): " << ((d > e) && (d <= f)) << endl;
	cout << "(!a) && (d == e): " << ((!a) && (d == e)) << endl;

	return 0;
}