/*
	Pointers in C++
	This video talks about raw pointers, not smart pointers.

	A lot of people struggle with this.

	Memory is the most important thing in programming.
	All the instructions and data are in memory.

	Pointers manage and manipulate memory.
	A pointer is an integer which holds a memory address.
	Memory is one big blob.  Like a street with a row of houses.
	Memory is a linear address (one byte) in a line.

	A pointer is that address of the byte of memory.
	Everything in code reads from or writes to memory.

	You don't need to use pointers.   Useful tool
	A pointer, for all types, is an int that holds a memory address.

	size of integer depends on computer.  int could be 4 bytes or 8 bytes
	types do not matter.  Useful for pointer arithmetic.

	A pointer just points to a memory address.

	*/


#include <iostream>

#define LOG(x) std::cout << x << std::endl;

int main()
{
	char* buffer = new char[8];
	memset(buffer, 0, 8); //fill buffer with zeroes
	
	char** ptr5 = &buffer;

	//free the buffer memory
	delete[] buffer;

	

	//type is meaningless
	void* ptr = 0;
	void* ptr2 = NULL;
	void* ptr3 = nullptr;

	double var = 8.5;
	double* ptr4 = (double *)&var;
	*ptr4 = 11.4;

	LOG(&var);
	std::cin.get();
}