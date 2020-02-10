#include <iostream>
/*
	References are an extension of pointers.
	Pointers and references are pretty much the same thing.
	Referenes are pointers in disguise.
	A reference is a way to reference an existing variable.
	Reference have to reference an existing variable.
	A reference is like an alias.
	A reference does not occupy memory, and they take up no storage.
	
	int& is a reference to an int, not an address.
	The & is part of the type.  It's not address of.
	int& ref = a;  does not create a variable.

	ref = 2 then print a - a is 2
	Compiler just creates one variable.

	If you pass &a to the function you get a pointer.
	Then the function can increment the variable.
	Need to dereference the pointer first.

	Once you declare a reference, you need to specify the variable it points to.
	You cannot change the reference to point to another variable.
*/

#define LOG(x) std::cout << x << std::endl;

void Increment(int value)
{
	value++;
}

void Increment2(int* value)
{
	*value++;
}

void Increment3(int* value)
{
	(*value)++;
}

void Increment4(int& value)
{
	value++;
}

int main()
{
	int a = 5;
	// the ampersand is  part of the type in a reference
	int& ref = a; //ref is an alias for a
	ref = 2;
	LOG(a);
	
	a = 5;
	Increment(a);
	LOG(a);  // a is not incremented


	a = 5;
	Increment2(&a);
	LOG(a);   // a is not incemented - need to deference a

	a = 5;
	Increment3(&a);
	LOG(a);   // a is incremented - a is dereferernced in Increment3

	a = 5;
	Increment4(a);
	LOG(a);   // a is incemented using a reference instead of a pointer

	// you cannot change a reference to point to another variable
	a = 5;
	int b = 8;
	int& ref2 = a;  //OK
	ref2 = b;  // sets a to value of b, or 8.
	LOG(a);

	/*a = 5;
	b = 8;
	int* ref2 = &a;
	ref2 = 2;
	ref2 = b;
	(ref2) = 1*/;
	

	std::cin.get();
}