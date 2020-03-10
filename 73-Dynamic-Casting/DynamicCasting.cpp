/*
	Dynamic Casting

	Casting is a way to convert types in C++.  The type system is not particularly enforced in C++.
	Casting is a way to protect our code.

	Dynamic casting is a way to protect our code.
	The C style cast uses parentheses to change the cast (before the variable declaration)
	The C++ style cast with angle brackets. It does some validation to ensure that the cast is valid.

	Dynamic casting is optional.
	It's a tool that's more like a function.
	It's evaluated at run time, with an associated performance.

	Dynamic casting is used for checking for types in the inheritance hierarchy.
	If you have  an entity, player, and enemy cast,
	You can change the derived type to the base type (player or enemy to entity) without casting, since the derived
	class already already is an instance of the base type.
	However, casting from the base type to the derived  type presents problems, since you do not know whether
	the entity is actually the derived type.  The entity could either be a player or an enemy, or it could be
	a player.  Dynamic cast validates whether an entity is a player or an enemy.  There's also a typeless cast.  

	Each class has members and functions unique to that type.
	If the cast is wrong (i.e., an entity is not an enemy but a player but an enemy) and a function that is
	not the right type, the program will likely crash.

	At 7:57.  Continue with example.

*/
#include <iostream>

class Entity
{

};

class Player : public Entity
{

};

class Enemy : public Entity
{

};

int main()
{
	Player* player = new Player();  //uses raw pointers, not smart pointers
	Entity* e = player; // Implicit cast. Valid because a Player is also an Entity
	Entity* e1 = new Enemy();

	// Player* p = e;  compiler error - cannot cast from the derived type to the base type.
	Player* p = (Player*)e;  // need to cast e to Player* because we tell the compiler that e is actually an Entity. 

	// if p1 does something that an enemy shouldn't do, it could cause a crash.
	Player* p1 = (Player*)e1;  // compiler allows the cast, but e1 is actually an enemy, so this is dangerous
							   // e1 is masquerading as an enemy.

	Player* p2 = dynamic_cast<Player*>(e1);




	std::cin.get();
}

