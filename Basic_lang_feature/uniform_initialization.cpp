#include<iostream>
#include <string>

int main() {
	// In C++98 Scalar initialize with = , ()
	int a1 ; //uninitialized
	int a2 = 0 ;//Using assignment operator it's copy initalization
	int a3(7); //Direct initialized

	std::string s1;
	std:: string s2("Hello"); //Direct Initialized


	char d1[8]; //Uninitialized
	char d2[8] = {'\0'}; // Copy
	char d3[3] = {'q', 'l', 'k'} ; //Aggregate Initialization
	char d4[8] = {"abcd"};

	//Uniform Initializer in C++11
	int b1{}; //Value initialization
	//int b2() ;//Most Vixing parse
	int b3{5};//Direct initialization

	int b4 = 0;

	char e1[8] {};
	char e2[16] {"Hello world"};

	int *p1 = new int{};
	char *p2 = new char[8] {};
	char *p3 = new char[8] {'k'};

}
/*
1. Value initialization => T obj{};
2. Direction initialization => T obj{v};
3. Copy initialization => T obj = v;/Avoid for user defined obj
*/

/*
1. It forces initialization.
2. Can use direct initialization for array type
3. It prevents narrow conv
4.Uniform syntax for all types.
*/