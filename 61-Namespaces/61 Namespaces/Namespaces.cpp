/*
	Namespaces

	TheCherno doesn't like namespaces.
	
	Example below:  print method in apple and orange namespace have same signature.
	Both print functions take in a const* pointer and return void.
	Link or compilation error.

	C doesn't have namespaces.  So in many libraries you need to avoid name conflict.
	So you prefix the function with its library.

	The primary purpose of namespace is to avoid naming conflicts.
	We want to call functions with the same name in different contexts.

	Cherno likes to put the curly start brace on the same line as the namespace.
	The reason is that putting the start curly brace on the next line leads
	to confusion about the brace pairings.

	:: is the namespace operator

	Same idea applies to classes, which are sort of like a namespace, as well as
	static and non static functions.

	Can do using apple::print to specify which namespace works

	Confine the namespace scope to as small a scope as possible.
	Never put the namespace declaration in header files because they get included a lot.

	See examples in namespace page in cppreference.com.

	Everything in the c++ standard library is in the std:: namespace.

	You risk a naming conflict if you use c code in a C++ code base.
*/
#include <iostream>
#include <string>
#include <algorithm>

namespace apple {

	
	//void print(const std::string& text)
	void print(const char* text)
	{
		std::cout << text <<std::endl;

	}
}


// the two print functions have the same signature
// Need to invoke the print function using the namespace.
namespace orange 
{	
	void print(const char* text)
	{
		std::string temp = text;
		std::reverse(temp.begin(), temp.end());
		std::cout << temp << std::endl;
	}
}
#include <iostream>

int main()
{
	// need to qualify which print function to invoke
	apple::print("Hello");
	orange::print("Hello");

	// this produces an error.  Which print function should be called?
	//print("Hello");

	using apple::print;  //uses the apple version of print function
	{
		print("Hello");
	}
	
	// this works
	namespace a = apple;
	a::print("Hello");

	std::cin.get();
}
