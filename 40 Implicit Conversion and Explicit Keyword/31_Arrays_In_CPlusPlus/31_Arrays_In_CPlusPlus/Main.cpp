/*
	Arrays In  C++

	Pointers are the basis for arrays.
	An array is a collection of elements (variables) in a row.
	Variables need to be created manually.
	50 integers that represent data, grouped - need 50 lines of code.
	Use an array to contain the 50 elements in one group.
	One variable has a single name.

	Arrays work well with for loops

	Arrays store their data contiguously.
	Start at beginning of array, offset n * sizeof(int) bytes

*/

#include <iostream>

int main()
{
	int example[5];  //allocate space for 5 integers.
	example[0] = 2;  //first index is 0, last is 4
	example[4] = 4;  //5th element
	//array by itself is a pointer.

	int a = example[0];  //int is underlying data type
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
	int* another = new int[5];
	for (int i = 0; i < 5; i++)
		another[i] = 2;
	
	delete[] another;
	


	std::cin.get();
}