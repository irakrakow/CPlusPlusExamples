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
	HelloWorld();


	void(*cherno)() = HelloWorld;
	cherno = HelloWorld;

	//does not work - need to call without parentheses
	//auto function = HelloWorld();

	//works - get memory instruction of instructions for HelloWorld
	auto function = &HelloWorld;
	auto function2 = HelloWorld;

	function();
	function2();

	


	std::cin.get();
}