#include <iostream>
#include <string>

/*
	Using comments and print
*/
void comments_and_print() {
	/*
		Many
		Lines
		Comments
	*/
	// Line comment
	std::cout << "Hello world" << std::endl;
};

/*
	Errors compilation and runtime
*/
void compile_and_runtime_errors() {
	// Runtime error
	int divideByZero = 7/0;

	// Compile error
	// std::cout << "Complie Error" << std::endl
};

/* 
	Using function
*/

int plus(int a, int b) {
	return a + b;
}

void function_usage() {
	int numberA {6};
	int numberB {4};
	std::cout << "Number A: " << numberA << std::endl;
	std::cout << "Number B: " << numberB << std::endl;
	std::cout << "Sum: " << plus(numberA, numberB) << std::endl;
};

/*
	Ways to print on console
*/
void ways_print_console() {
	std::cout << "Regular message" << std::endl;
	std::cerr << "Error message" << std::endl;
	std::clog << "Log message" << std::endl;
}

/*
	Its necessary to include <string>
*/
void get_data_and_use_string() {
	int age;
	std::string name, full_name;

	std::cout << "Please type your name and age: " << std::endl;

	// Get Data with spaces, must be first
	std::getline(std::cin, full_name);

	std::cin >> name >> age;

	std::cout << "Your full name is " << full_name << std::endl;
	std::cout << "Hello " << name << " you are " << age << " years old!" << std::endl;
}

/*
	Types numeric representations
*/
void representation_numbers() {
	 int decimal = 15;
	 int octal = 017;
	 int hexadecimal = 0x0f;
	 int binary = 0b00001111; // C++14

	 std::cout << "Decimal: " << decimal << std::endl;
	 std::cout << "Octal: " << octal << std::endl;
	 std::cout << "Hexadecimal: " << hexadecimal << std::endl;
	 std::cout << "Binary: " << binary << std::endl;
}

/* 
	Types of assigment variables (Brace, Function and Assigent)
*/
void variables_types_assigment() {
	int elephant_count; // variable may contain random garbage value
	int lion_count {}; // Brace initializes to zero
	int dog_count {10};  // Brace initializes to 10
	int cat_count (2); // Function initializes to 2
	int domestict_count = dog_count + cat_count; // Assigment initializes

	std::cout << "elephant_count: " << elephant_count << std::endl;
	std::cout << "lion_count: " << lion_count << std::endl;
	std::cout << "dog_count: " << dog_count << std::endl;
	std::cout << "cat_count: " << cat_count << std::endl;
	std::cout << "domestict_count: " << domestict_count << std::endl;

	// check the size fit on memory with sizeof - int 4 bit
	std::cout << "sizeof domestict_count: " << sizeof(domestict_count) << std::endl;
	std::cout << "sizeof dog_count: " << sizeof(dog_count) << std::endl;
}

int main(int arg, char **args) {
	variables_types_assigment();
	return 0;
}