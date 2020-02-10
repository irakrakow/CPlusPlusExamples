/*
	Enums in C++

	An enum is a way to give a name to a value
	Enums are integers.
	Can also name a group of values or states.
	Can limit which values are assigned to what.

	Limit values for a type.
	values start at 0.
	


*/

#include <iostream>

// type must be 1 byte, like an unsigned char or just a char.
enum Example : unsigned char
{
	D=5, E, F
};

// these variables are not grouped at all.
int A = 0;
int B = 1;
int C = 2;


int main()
{

	int value = B;
	std::cout << value << std::endl;

	Example value2 = F;  // yirlds 7
	// value2 = 5;  error: 5 is outside enum range.
	std::cout << value2 << std::endl;
		
	std::cin.get();
}