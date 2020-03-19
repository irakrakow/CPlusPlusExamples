/*
	Multiple Return Types in C++

	Discuss what a tuple is, what a pair is, and how to return multiple values.
	Example of a function returning 2 strings.

	In C++ by default you cannot really return two variables.
	Python allows multiple variables.
	One could return a vector to return two or more variables of the same type (vector, array).
	What if they are of different types?
	
	Example in OpenGl series, a struct containing two strings.
	can return multiple variables of the same type via a vector or an array.

	an array is created on the stack.
	a vector is created on the heap.

	a tuple is used to return two or more variables that may or may not be of the same type.
	tuple is messy - deal with index numbers.

	std::pair contains two types (.first, .second)
	you actually get to name the return variables instead of using index numbers.

*/
#include <iostream>
#include <string>

struct ShaderProgramSource
{
	std::string VertexSource;
	std::string FragmentSource;
	int a;  //can add whatever variables you want to include in the struct
};

int main()
{

	std::cin.get();
}