/*
Variables in C++

When we write a program, we want to use data.
A program manipulates data.
A variable names a piece of data.

Example:  store a player's position as some kind of variable.
This is one of the fundamentals of writing a program in any language.
A variable is stored either in the stack or the heap in memory.

Variables occupy memory.
Primitive data types.

Very few rules when you get down to it.
Really the only distinction between variable types is its size.

Limits on value of a variable are directly tied to the size of the variable
1 byte is 8 bits of data.
an int is signed, so one of the 32 bits needs to be for the sign.
31 bits to play with.  2**31 is the maximum number that we can store.
Can also store 2**31 bits for a negative number.

unsigned number uses all 32 bits.
Adding unsigned modifier removes the sign bit, doubling the maximum size of the number.

The usage of data types is up to the programmer.  There are certain conventions but they can be overridden.
The modifiers actually just specify the size of the variable.
Doubles are 8 bytes in size.  Floats are 4 bytes in size.

bool default for true is 1
bool occupies 1 byte of memory
cannot use 1 bit as the size because addresses are in bytes so to retrieve the value you can't get to the bit level.

*/

#include <iostream>

int main()
{
	bool mybool = true;
	std::cout << mybool << std::endl;
	mybool = false;
	std::cout << mybool << std::endl;
	mybool = 2349;  //prints 1 because any value not 0 is true.
	std::cout << mybool << std::endl;
	std::cout << sizeof(mybool) << std::endl;



	float afloat = 5.5;
	std::cout << afloat << std::endl;
	char mychar = 'A'; //one byte
	std::cout << mychar << std::endl;
	mychar = 65; //also outputs A
	std::cout << mychar << std::endl;
	short a = 'A';  // outputs 65
	std::cout << a << std::endl;

	// int data type usually has a length of 4 bytes.
	// int is a signed integer
	int variable = 8;  // specify type, name, and value
	std::cout << variable << std::endl;

	// can modify our variable by reassigning a value to it.
	variable = 20;
	std::cout << variable << std::endl;

	unsigned int unsgn = 2224433556;
	std::cout << unsgn << std::endl;


	std::cin.get();
}