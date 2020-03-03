/*
	Inheritance in  C++

	Inheritance between classes is a fundamental aspect of OOP.
	Allows us to have a base class with common functionality,
	and then branch off from the base class to create sub classes.

	The primary reason this is useful is to avoid code duplication.
	Code duplication is where you copy and paste the same code in
	different classes. 

	We put all the common code into a base class and then modify the derived
	class to add the new functionality.  Like a template.

	We can implement polymorphism as well, multiple types for a single type.

	Player has everything that Entity has.

	You can override a method and change behavior in the subclass.

	May need to use a vTable if subclass defines additional classes.
*/

#include <iostream>

class Entity
{
	// shared functionality
public:
	float X, Y;

	void Move(float xa, float ya)
	{
		X += xa;
		Y += ya;
	}
};

class PlayerNoInheritance
{
public:
	// new member variable
	const char* Name;

	// otherwise, same characteristics as Entity
	// copy-paste from Entity

	float X, Y;

	void Move(float xa, float ya)
	{
		X += xa;
		Y += ya;
	}
};

class Player : public Entity
	// Player shares all the attributes of Entity
	// Player has both the type Entity and the type Player
	// Player has access to all the members and methods of the Entity class
{
public:
	// new member variable
	const char* Name;

	// new method
	void PrintName() 
	{
		std::cout << Name << std::endl;
	}

};


int main()
{
	Player player;
	player.Name = "Ira";
	player.PrintName();
	player.Move(2.0, 4.5);
	player.X = 2;

	std::cout << sizeof(Entity) << std::endl;
	// Player includes everything in Entity, plus whatever else is in Player.
	std::cout << sizeof(Player) << std::endl;

	std::cin.get();
}