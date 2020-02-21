/*
	Function Pointers in C++

	This comes from C.
	Raw function pointer - a way to assign a function to a variable.
	A function pointer is a symbol that we can assign to a variable.
	You can pass functions to other functions as a parameter.


*/

#include <iostream>
using namespace std;

void HelloWorld()
{
	std::cout << "Hello World!" << std::endl;
}

int main()
{
	
	// called normally
	std::cout << "Regular function call\n";
	HelloWorld();

	// Perhaps we can use the auto keyword to create a function pointer.
	// this doesn't work because we cannot deduce the type
	// auto function = HelloWorld();

	// getting the memory address of that function might work.
	// Don't use parentheses.
	// HelloWorld points to the instructions for the function.
	//auto function = &HelloWorld;
	//function();  // call using the function pointer

	// called via function pointer
	
	void(*ira)() = HelloWorld;
	ira = HelloWorld;

	//does not work - need to call without parentheses
	//auto function = HelloWorld();

	//works - get memory instruction of instructions for HelloWorld
	auto function = &HelloWorld;
	auto function2 = HelloWorld;

	std::cout << "using &HelloWorld \n";
	function();
	std::cout << "using HelloWorld \n";
	function2();
	std::cout << "using void pointer\n";
	ira();
	


	std::cin.get();
}