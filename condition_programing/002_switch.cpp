#include <iostream>

using namespace std;

const int PEN {10};
const int MARKER {20};
const int ERASER {30};
const int RECTANGLE {40};

int main() {
	int tool {ERASER};
	cout << "---- switch ----" << endl;
	
	// remember use the break to not execute others cases above
	switch (tool) {
		case PEN: cout << "tool is a PEN" << endl; break;
		case MARKER: cout << "tool is a MARKER" << endl; break;
		case ERASER: cout << "tool is a ERASER" << endl;
		case RECTANGLE: cout << "tool is a RECTANGLE" << endl; break;
		default: cout << "tool not exists" << endl; break;
	}

	return 0;
}