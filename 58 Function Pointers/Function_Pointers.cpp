/*
	Function Pointers in C++

	Discuss raw function pointers as are found in the C language.
	C++ functions such as lambdas (anonymous functions) will be discussed in a later video.
	Also lambdas will be discussed.

	Up to this point, a function is just something we call.
	Function pointer is a way to assign a function to a variable.

	You can pass functions into other functions as parameters.

	Function pointers point to the address of the function in our binary.

	Resume at 7:52.

*/
// First thing - classic function
#include <iostream>

void HelloWorld()
{
	std::cout << "Hello World" << std::endl;
}


int main()
{
	//standard way to call function
	std::cout << "=====standard way to call function.." << std::endl;
	HelloWorld();


	std::cout << "=====Using auto keyword.." << std::endl;
	//auto function = HelloWorld();  // does not work - cannot deduce type.
	// HelloWorld() returns void, which has no type

	std::cout << "=====HelloWorld without parentheses (as a variable).." << std::endl;
	auto function = HelloWorld;
	function();
	// also works - implicit conversion
	function = &HelloWorld;
	function();

	std::cout << "=====using type deduced by auto=====" << std::endl;
	void(*cherno)();  // declare function pointer 
	cherno = HelloWorld;
	cherno();

	std::cout << "=====using typedef=====" << std::endl;
	typedef void(*HelloWorldFunction)();
	HelloWorldFunction f = HelloWorld;
	f();

	std::cin.get();
	return 0;
}
