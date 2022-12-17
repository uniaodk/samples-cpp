#include <iostream>
#include <ios>
#include <iomanip>

using namespace std;

int main() {
	cout << "---- endl ----" << endl << endl; // break lines
	cout << "Line 1" << endl << "Line 2" << endl << endl << "Line 4" << endl << endl;

	cout << "---- flush ----" << endl << endl;
	cout << "test after flush" << endl << endl << flush; // send imediatily to terminal and device on usage 

	cout << "---- setfill() | right | left | internal (default) | setw() ----" << endl << endl;
	int column_width = 10;
	cout << setfill('.'); // fill blank spaces
	cout << right; // align text to right
	cout << setw(column_width) << "Daniel" <<  setw(column_width) <<"Gray" << setw(5) << "25" << endl;
	cout << left; // align text to right
	cout << setw(column_width) << "Stanley" << setw(column_width) << "Woods" << setw(5) << "33" << endl;
	cout << internal; // align text to left justify
	cout << setw(column_width) << "Jordan" << setw(column_width) << "Parker" << setw(5) << "45" << endl << endl;


	cout << "---- boolalpha | noboolalpha (default) ----" << endl << endl;
	bool bool_false {false};
	cout << boolalpha; // show bool like true/false
	cout << "bool_false: " << bool_false  << endl;
	cout << noboolalpha; // show bool like 1/0
	cout << "bool_false: " << bool_false << endl << endl;

	cout << "---- showpos | noshopos (default) ----" << endl << endl;
	int pos_num {34};
	int neg_num {-45};
	cout << "showpos test" << endl;
	cout << showpos; // show signal + on number
	cout << "pos_num: " << pos_num << endl;
	cout << "neg_num: " << neg_num << endl << endl;
	cout << "noshowpos test" << endl;
	cout << noshowpos;
	cout << "pos_num: " << pos_num << endl;
	cout << "neg_num: " << neg_num << endl << endl;

	cout << "---- dec (default) | oct | hex ----" << endl << endl;
	int pos_int {717171};
	int neg_int {-47347};
	double double_var {498.32};
	cout << "pos_int (dec): " << dec << pos_int << endl;
	cout << "pos_int (hex): " << hex << pos_int << endl;
	cout << "pos_int (oct): " << oct << pos_int << endl << endl;
	cout << "neg_int (dec): " << dec << neg_int << endl;
	cout << "neg_int (hex): " << hex << neg_int << endl;
	cout << "neg_int (oct): " << oct << neg_int << endl << endl;
	cout << "double_var (dec): " << dec << double_var << endl;
	cout << "double_var (hex): " << hex << double_var << endl;
	cout << "double_var (oct): " << oct << double_var << endl << endl;

	cout << "---- showbase | noshowbase (default) ----" << endl << endl;
	cout << "showbase: " << showbase << endl;
	cout << "pos_int (hex): " << hex << pos_int << endl << endl;
	cout << "noshowbase: " << noshowbase << endl;
	cout << "pos_int (hex): " << hex << pos_int << endl << endl;

	cout << "---- uppercase | nouppercase (default) ----" << endl << endl;
	cout << "uppercase: " << uppercase << endl;
	cout << "pos_int (hex): " << hex << pos_int << endl << endl;
	cout << "nouppercase: " << nouppercase << endl;
	cout << "pos_int (hex): " << hex << pos_int << endl << endl;

	cout << "---- default | scientific | fixed ----" << endl << endl;
	double a {3.141592653589};
	double b {2006.0};
	double c {1.34e-10};
	cout << "default: " << endl;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "c: " << c << endl << endl;
	cout << "scientific: " << scientific << endl;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "c: " << c << endl << endl;
	cout << "fixed: " << fixed << endl;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "c: " << c << endl << endl;
	cout << "back to default unsetf: " << endl;
	cout.unsetf(ios::scientific | ios::fixed);
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "c: " << c << endl << endl;

	cout << "---- setprecision ----" << endl << endl;
	cout << "a (default precision(6)): " << a << endl;
	cout << setprecision(10);
	cout << "a (default precision(10)): " << a << endl;
	cout << setprecision(20);
	cout << "a (default precision(20)): " << a << endl << endl;

	cout << "---- showpoint | noshowpoint (default) ----" << endl << endl;
	cout << "showpoint: " << showpoint << endl; // bring the zeros with the precision
	cout << "b: " << b << endl << endl;
	cout << "noshowpoint: " << noshowpoint << endl;
	cout << "b: " << b << endl << endl;
	return 0;
}