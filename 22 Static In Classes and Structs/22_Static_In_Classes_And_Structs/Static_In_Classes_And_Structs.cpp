#include <iostream>
/*
	Static for Classes and Structs

	static in a variable means there is only one instance
	of the variable across all instances of the class
	or struct.

	If one of the instances changes a static variable,
	it is reflected in all instances of the variable.

	The variable cannot be referred to through an instane.

	Static methods cannot be referred through an instance.

	Static methods cannot access nonstatic variables.

	A static method does not have a class instance.

*/
struct Entity
{
	static int x, y;

	void Print()
	{
		std::cout << x << ", " << y << std::endl;
	}
};

int Entity::x;
int Entity::y;

int main()
{
	// x and y are static variables - only one instance
	// of x and y exist.  The object variables don't exist
	Entity e;
	Entity::x = 2;
	Entity::y = 3;
	e.Print();

	Entity e1;
	// refers the same variable.
	Entity::x = 6;
	Entity::y = 7;

	//illegal because Print() is a non static method
	//Entity::Print();
	e.Print();
	e1.Print();


	std::cin.get();

}