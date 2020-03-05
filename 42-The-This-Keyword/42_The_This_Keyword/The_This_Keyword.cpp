/*
The "this" keyword

The this keyword is accessible only through a non-static method.
"This" references the object that the method points to.

Need to instantiate an object, then use the this keyword to
reference that instance.




*/
#include <iostream>
#include <string>

class Entity
{
public:
	int x, y;
	

	//Problem:  how do you reference the x and y in the class
	// vs the parameters in the constructor?

	//this works using initializer syntax
	/*Entity(int x, int y)
		:x(x), y(y)
	{

	}*/


	//However, initializing in the body means you need to
	// differentiate the member variable x from the constructor
	// parameters.

	Entity(int x, int y)
	{
		this->x = x;  //assigns the member varable the x parameter
		this->y = y;  //assigns the member variable y the y parameter 
	}

	//getter for x;
	int GetX() const
	{
		return x;
	}

};


int main()
{

	Entity e = Entity(5, 6);
	e.GetX();

	std::cout << e.GetX() << std::endl;
	std::cin.get();
}