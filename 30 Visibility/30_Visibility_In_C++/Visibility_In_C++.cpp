/*
	Visibility in C++

	Visibiliity belongs to object oriented programs.
	Visibility has no effect on how your program actually runs or program performance.
	It exists in the language for you to write better code, organize code.

	Three types of visibility - private, protected, public
	friend - labels a class or a function.
	friend can access private variables of a function.

	public variables make code hard to understand, invites bugs.
	use setter method to access private variables in a class.

*/
#include <iostream>
#include <string>

struct MyStruct
{
	// defaults to public
public:
	int a;
};

class Entity
{
	// defaults to private
protected:
	int z;
private:
	int X, Y;

	void Print() {}
public:
	Entity()
	{
		X = 0;
		Print(); // legal, called within the class
	}

};

class Player : public Entity
{
public:
	Player()
	{
		// cannot access X because X is private.
		// X = 2;

		// cannot access privae method in Entity class
		// Print();

		// OK here because z is protected.
		// subclass of Entity can access it.
		z = 3;


	}

};



int main()
{

	Entity e;
	// illegal: cannot access private variable
	// e.X = 2;


	Entity e1;
	// z is inaccessible because it is in Player class
	// e1.z = 3;

	std::cin.get();
}