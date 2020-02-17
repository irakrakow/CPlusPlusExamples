/*
	Arrays In  C++

	Pointers are the basis for arrays.
	An array is a collection of elements (variables) in a particular order..
	They are a group of data.
	Variables need to be created manually.
	index starts with 0.  One of the elements of the array is like an individual variable
	of that type..
	50 integers that represent data, grouped - need 50 lines of code.
	Use an array to contain the 50 elements of the same type in one group.
	Like having multiple variables in one variable.
	One variable has a single name.

	Arrays work well with for loops

	Arrays store their data contiguously, on the stack.
	Start at beginning of array, offset n * sizeof(int) bytes

	In C++ 11 there's something called std array in the C++ 11 library.
	Includes bounds checking and can determine size of our array.
	If you allocate an array on the stack (without the new keyword) you can determine the size because
	it's the offset from the start of the array.

	this trick only works with arrays allocated on the stack.
	int count = sizeof(array) / sizeof(int)

	Research static and constexpr.

	There is overhead with std array - maintains size, has to jump around to get to elements of array.

*/

#include <iostream>

int main()
{
	int example[5];  //allocate space for 5 integers. type/name/number of elements
	example[0] = 2;  //first index is 0, last is 4
	example[4] = 4;  //5th element
	//array by itself is a pointer type.

	int a = example[0];  //int is underlying data type
	//example[-1] = 6;	 //outside bounds of example array memory access violation
	//example[5] = 6;    //no bounds checking - BAD

	std::cout << example[0] << std::endl;
	std::cout << example << std::endl;
	for (int i = 0; i < 5; i++)
	{
		example[i] = 2;
		std::cout << example[i] << std::endl;
	}

	int* ptr = example;  //ptr points to beginning of array
	*(ptr + 2) = 6;   //use pointer arithmetic size depends on type

	*(int*)((char*)ptr + 8) = 9;  //does pointer arithmetic based on char, derefences to int*

	////allocated on heap - see new keyword
	////another is alive until explicit use of delete[]
	// another lives after it goes out of scope, while a is deallocated when it goes out of scope.
	int* another = new int[5];
	for (int i = 0; i < 5; i++)
		another[i] = 2;

	delete[] another;

	// memory indirection.  Uses pointer.
	// this causes memory fragmentation.  Each element is at a noncontiguous location to the previous element.



	std::cin.get();
}