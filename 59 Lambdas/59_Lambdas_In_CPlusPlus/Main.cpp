/*
	Lambas in C++

	Lambdas are anonymous functions.
	Anywhere you can use a function pointer you can use a lambda.



*/

#include <iostream>
#include <vector>
#include <algorithm>

void ForEach(const std::vector<int>& values, void(*func)(int))
{
	for (int value : values)
		func(value);
}

int main()
{
	std::vector<int> values = { 1, 5, 4, 2 , 3 };
	ForEach(values, []( int value) { std::cout << "Value: " << value << std::endl; });
	std::cin.get();
}