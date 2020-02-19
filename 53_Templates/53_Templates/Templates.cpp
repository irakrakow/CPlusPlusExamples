/*
	Templates in C++

	Gentle introduction.
	Other languages call them "generics"
	Templates are diffent and more powerful.
	Like a bit of a macro - can do anything.
	Generics are limited by the type system.

	Template allows you to define a template that's compiled by usage.
	The compiler gets a blueprint, which is determined by how the function is used.

	A template can avoid having to write a ton of overloaded methods.
	Avoids code duplication.

	The word "template" indicates a template.
	This isn't actual code.
	Template argument substitutes typename letter.
	Template avoids overloading functions that basically are for different types.


	If you never use a templated function, the function doesn't exist.
	Need to call the function to activate the template.
	Can also use "claaa" instead of "typename".
	TheCherno likes typename.

	If the template is not invoked, it doesn't exist at run time.
	Some compilers (Visual Studio C++) won't tell you if the template
	is never invoked.  Others (CLang) will tell you.

	Classes can be template arguments.   That's the structor of the
	standard template library.

	Something like "metaprogramming" in C++.
	Some organizations ban templates.
	This is overreacting because there are situations where you need this
	You can automate the compiler writing code for you.

	You can go really far with templates.
	There's a point where the templates are so complex that it's hard to 
	figure out what code is being compiled.

	Don't get too crazy with templates.

	Logging systems and graphics rendering are good examples of where
	templates might be useful.

*/

#include <iostream>
#include <string>

// templates avoids overload
// typename lets you susbstitute the type at run time.
template<typename T>
void Print(T value)
{

	std::cout << value << std::endl;
}

// Avoids having many overloads, as below:
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


//this array template lets programmer specify array size.
template<int N>
class Array
{
private:
	int m_Array[N];
public:
	int GetSize() const { return N; }
};

//Array2 template has 2 template arguments, the type and the size
template<typename T, int N>
class Array2
{
private:
	int m_Array[N];
public:
	int GetSize() const { return N; }


};

int main()
{
	// provide the Array template with the array size
	Array<11> array;
	std::cout << array.GetSize() << std::endl;

	//Array2 with 2 template arguments - type and size are arguments
	Array2<std::string, 50> array2;
	std::cout << array2.GetSize() << std::endl;
	
	Print<int>(5);  // explicitly specifies the type, restricting to int
	char var = 'A';
	//Print<std::string>(var);  // compile time error. 'A' is not a string.
	Print(var);   //works

	Print(5.4f);   // template generates Print with a float argument.

	std::cin.get();
}