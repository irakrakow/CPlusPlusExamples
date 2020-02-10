/*
	Destructors

	Evil twin of a constructor.
	Destructor runs any time an object is destroyed.
	Unitialize variables, free up memory.

	Destructor applies to both stack and heap allocated objects.
	If you allocate a heap based object using new, use delete to deallocatae memory.
	For a stack based object the destructor is called when the scope of  that object ends.

	



*/
#include <iostream>

class Entity {

public:
	float X, Y;

	Entity()
	{
		X = 0.0f;
		Y = 0.0f;
		std::cout << "Entity constructor called\n";
	}

	


	Entity(float x, float y)
	{
		X = x;
		Y = y;
		std::cout << "Entity constructor with 2 floats called \n";
	}

	~Entity()
	{

		std::cout << "Entity destructor called\n";
	}

	

	void Print()
	{
		std::cout << X << ", " << Y << std::endl;
	}
};

void Function()
{
	Entity e;
	e.Print();
	e.~Entity();  // rare to use this.

}


int main()
{
	Function();
	
	
	std::cin.get();
}