#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double weight {7.3};
	double savings {-5000};

	cout << "---- floor ----" << endl;
	cout << "weight rounded to floor: " << floor(weight) << endl << endl;
	
	cout << "---- ceil ----" << endl;
	cout << "weight rounded to ceil: " << ceil(weight) << endl << endl;
	
	cout << "---- abs ----" << endl;
	cout << "abs to weight: " << abs(weight) << endl;
	cout << "abs to savings: " << abs(savings) << endl << endl;

	cout << "---- exponential ----" << endl;
	cout << "exponential of 10 is: " << exp(10) << endl << endl;

	cout << "---- pow ----" << endl;
	cout << "3 ^ 4 is: " << pow(3, 4) << endl;
	cout << "9 ^ 3 is: " << pow(9, 3) << endl << endl;

	cout << "---- log ----" << endl;
	cout << "log(54.49) is: " << log(54.49) << endl << endl;

	cout << "---- log10 ----" << endl;
	cout << "log10(10000) is: " << log10(10000) << endl << endl;

	cout << "---- sqrt ----" << endl;
	cout << "sqrt(81) is: " << sqrt(81) << endl << endl;

	
	cout << "---- round ----" << endl;
	cout << "3.654 rounded to: " << round(3.654) << endl;
	cout << "2.5 rounded to: " << round(2.5) << endl;
	cout << "2.4 rounded to: " << round(2.4) << endl << endl;

	return 0;
}