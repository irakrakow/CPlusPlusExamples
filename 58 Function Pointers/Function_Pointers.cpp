/*
	Function Pointers in C++

	Discuss raw function pointers as are found in the C language.
	C++ functions such as lambdas (anonymous functions) will be discussed in a later video.
	Also lambdas will be discussed.

	Up to this point, a function is just something we call.
	Function pointer is a way to assign a function to a variable.

	You can pass functions into other functions as parameters.

	Function pointers point to the address of the function in our binary.

	7:52 starts iterating over vector elements using a function pointer

*/
// First thing - classic function
#include <iostream>
#include <vector>

void HelloWorld()
{
	std::cout << "Hello World" << std::endl;
}

void PrintValue(int value)
{
	std::cout << "Value: " << value << std::endl;
}


void ForEach(const std::vector<int>& values, void(*func)(int))
{
	for (int value : values)
		func(value);

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

	//=======================Iterating over a vector to print a value with function pointer==========================================
	std::cout << "=====using ForEach and  PrintValue functions=====" << std::endl;
	std::vector<int> values = { 3, 5, 4, 2, 3 };
	// see ForEach and PrintValue functions above
	ForEach(values, PrintValue);

	std::cout << "=====using lambda function instead=====" << std::endl;
	ForEach(values, [](int value) {std::cout << "Value: " << value << std::endl; });

	std::cin.get();
	return 0;
}
