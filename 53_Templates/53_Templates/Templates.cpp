/*
	Templates in C++

	Gentle introduction.
	Other languages call them "generics"
	Templates are diffent and more powerful.
	Like a bit of a macro - can do anything.

	Template allows you to define a template that's compiled by usage.
	The compiler gets a blueprint, which is determined by how the function is used.

	A template can avoid having to write a ton of overloaded methods.
	Avoids code duplication.

	The word "template" indicates a template.
	This isn't actual code.
	Temmplate argument substitutes typename letter.

	If you never use a templated function, the function doesn't exist.
	Need to call the function to activate the template.

*/

#include <iostream>
#include <string>

// templates avoids overloads
template<typename T>
void Print(T value)
{

	std::cout << value << std::endl;
}

//void Print(int value)
//{
//	std::cout << value << std::endl;
//}
//
//
//void Print(std::string value)
//{
//	std::cout << value << std::endl;
//}


int main()
{
	Print<int>(5);  // explicitly specifies the type, restricting to int
	char var = 'A';
	//Print<std::string>(var);  // compile time error. var is not a string.
	Print(var);   //works

	Print("Hello");   //requires overloading Print()

	std::cin.get();
}