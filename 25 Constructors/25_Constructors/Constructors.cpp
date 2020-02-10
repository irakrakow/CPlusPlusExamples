/*
	Constructors

	A constructor is a special method run every time we instantiate an object.

	Need for some kind of initialization of variables.
	Constructor is a special method called whenever an object is instantiated.

	A constructor does not have a return type, and its name must match the class.

	If you don't have a constructor, you get a default constructor.
	Default constructor doesn't do anything.

	In Java, primitive types are set to 0 automatically.
	In C++ you need to manually initialize all your primitive types.

*/

#include <iostream>

class Entity {

public:
	float X, Y;

	Entity()
	{
		X = 0.0f;
		Y = 0.0f;
	}


	Entity(float x, float y)
	{
		X = x;
		Y = y;
	}

	void Init()
	{
		X = 0.0f;
		Y = 0.0f;
		std::cout << "Constructor called " << std::endl;
	}
	
	void Print()
	{
		std::cout << X << ", " << Y << std::endl;
	}
};

int main()
{
	Entity e;  //instantiate object here
	//e.Print(); //call Print() function - uninitialized X and Y
	
	// can initialize the variables thusly
	/*e.X = 0.0f;
	e.Y = 0.0f;*/

	// or we can call Init() first and Print() second.
	// a lot of extra code because need to call Init() after instantiating the object.
	//e.Init();  
	e.Print();

	// constructor which takes 2 floats
	Entity e1(10.03f, 2.10f);
	e1.Print();


	std::cin.get();
}