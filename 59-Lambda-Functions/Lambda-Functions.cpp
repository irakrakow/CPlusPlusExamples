/*
	Lambdas

	Lambdas are a way to define what theCherno calls an "anonymous" function.  It's like a quick,
	disposable function, that does not have a name and is thrown away, so to speak, after use.

	We treat the function more like a variable, instead of a formal function that exists, like a symbol in
	our compiled code (if that makes sense).

	How and when to use lambdas?  The answer:  whenever you have a function pointer, you can use a lambda.
	Wherever we can set a function pointer to a function, we can set it to a lambda instead.

	See Example 58 (Function Pointers) video for examples of how and when to use a lambda.

	Lambdas will be used extensively in the Game Engine series.

	Treat this as a reference rather than a comprehensive explanation of all aspects of lambdas.

	In the ForEach function, we defined a lambda inline.  The int we are passing is the value we are iterating
	over.

	An important use of a lambda is to pass a function to an API so that at some point in the future
	the function can be specifically called.  We want to defer the calling of the function to the time
	all the information the function needs is available.

    cppreference.com has the documentation for lambdas.  It is at:
	https://en.cppreference.com/w/cpp/language/lambda

	captures are a comma delimited list of zero or more captures (C++ 11)
	You can capture variables, references, pass by value, static, this, ampersand, nothing, etc.

	Captures are used to put outside variables or functions inside our lambda.

	Can have specifiers, such as mutable or constexpr
	Also can have return types.



*/

#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>


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
	//=======================Iterating over a vector to print a value with function pointer==========================================
	std::cout << "=====using ForEach and  PrintValue functions=====" << std::endl;
	std::vector<int> values = { 3, 5, 4, 2, 3 };
	// see ForEach and PrintValue functions above
	ForEach(values, PrintValue);

	std::cout << "=====using lambda function instead=====" << std::endl;
	// no need for the PrintValue function - called inline
	
	auto lambda = [](int value) {std::cout << "Value: " << value << std::endl; };
	
	ForEach(values, lambda);

	std::cout << "=====using lambda with capture=====" << std::endl;
	std::cout << "=====a is outside of the lambda2 scope=====" << std::endl;
	int a = 5;
	auto lambda2 = [a](int value) {std::cout << "Value: " << a << std::endl; };
	lambda2(a);
	
	std::cout << "=====using lambda with std::find_if=====" << std::endl;
	std::cout << "need to #include <algorithm> " << std::endl;
	std::cout << "return iterator of vector values gt 3" << std::endl;
	auto it = std::find_if(values.begin(), values.end(), [](int value) { return value > 3; });
	// dereference iterator and print out
	// specify a boolean instead to get first element in the vector > 5
	std::cout << *it << std::endl;


	std::cin.get();
	return 0;
}
