/*
	Sorting

	Continuation of data structures.
	You could write your own algorithm, like bubble sort or quick sort

	However, if you deal with C++ inbuilt collection types, like std::vector, you can use std::sort
	In cppreference.com, you can use the template to sort based on an iterator.
	Everything inside the predicate is sorted in the specified order.

	You can use a function (regular or lambda) to control the order.
	There's no return value.
	The complexity is n log n.

	Can use std::sort lambda with all types.
	We can set the rules.
	We can use this with anything.

*/
#include <iostream>
#include <vector>
#include <algorithm>   //where std::sort lives
#include <functional>  //where iterator funcions such as std::greater live

int main()
{
	std::vector<int> values = { 3, 5, 1, 4 ,2};
	
	std::cout << "---------- ascending order (default)----------" << std::endl;
	std::sort(values.begin(), values.end());  //default is ascending order
	for (int value : values)
	{
		std::cout << value << std::endl;
	}

	std::cout << "---------- using std::greater----------" << std::endl;
	std::sort(values.begin(), values.end(), std::greater<int>());  //descending order sort
	for (int value : values)
		std::cout << value << std::endl;

	std::cout << "---------- using a lambda----------" << std::endl;
	std::sort(values.begin(), values.end(), [](int a, int b) //ascending sort
		{
			return a < b;  //boolean, true if a < b
		});
	for (int value : values)
		std::cout << value << std::endl;

	std::cout << "---------- using a lambda (descending sort)----------" << std::endl;
	std::sort(values.begin(), values.end(), [](int a, int b) //descending sort
		{
			return a > b;  //boolean, true if a > b
		});
	for (int value : values)
		std::cout << value << std::endl;

	std::cout << "---------- using a lambda (1 goes to end, descending order)----------" << std::endl;
	std::sort(values.begin(), values.end(), [](int a, int b) //ascending sort
		{
			if (a == 1)
				return false;
			if (b == 1)
				return true;

			return a > b;
		});
	for (int value : values)
		std::cout << value << std::endl;

	std::cout << "---------- using a lambda (1 goes to end, ascending order)-------" << std::endl;
	std::sort(values.begin(), values.end(), [](int a, int b) //ascending sort
		{
			if (a == 1)
				return false;
			if (b == 1)
				return true;

			return a < b;
		});
	for (int value : values)
		std::cout << value << std::endl;

	std::cin.get();
}