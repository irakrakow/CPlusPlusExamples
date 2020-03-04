/*
	Const in C++

	Const is a bit of a fake keyword.  It doesn't do much to the scope of the generated code.
	It is like visibility for classes and structs.

	Kind of makes code a bit cleaner and enforce certain rules on developers.
	Const is like a promise you give that you will not modify something.
	It's just a promise.
	You can break your promise.
	If you keep your promise, it will help simplify our code.

	By specifying const, you specified that the variable won't be changed.

	CONST IN CLASSES AND METHODS

	It makes sense to write const with a getter method but not with a setter method.
	Getter methods are read only so the member variables should not be changed.
	However with a setter method we really are changing the member variables,
	so a setter method should not be const.

	If you want declaration of multiple pointer variables in one line,
	you need to prefix all variable names with *

	Always mark methods as const if they do not modify the class.

	Mutable allows a variable in a class to be modified even if the function
	referencing the variable is const.

	Pass by const reference (const ref&) because we don't need to copy 
	variables unnecessarily.

*/

#include <iostream>
#include <string>

class Entity
{
private:
	int m_X, m_Y;
public:
	// declaring a method const means it will not modify anything in the class
	int GetX() const
	{
//		m_X = 2;  // illegal if method is const
		return m_X;
	}

	// should NOT be const method
	void SetX(int x) 
	{
		m_X = x;
	}


};

void PrintEntity(Entity e)
{
	std::cout << e.GetX() << std::endl;
}

int main()
{
	
	Entity e;



	
	int b = 5;

	// you can change b with no problem
	b = 2;  //OK
	
	

	// this makes sense - maximum age shouldn't change.
	const int MAX_AGE = 90;

	int*  a = new int;

//	int const * a = new int;
	// do you want the contents at the address not to change or the pointer not to change?
	// same as const int *a = new int;

	//const int const a = new int;  // illegal
	*a = 2;
//	a = &MAX_AGE;
	a = (int*)&MAX_AGE;
//	a = nullptr;

	std::cout << *a << std::endl;

	std::cin.get();
}