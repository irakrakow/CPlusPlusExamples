/*

	Classes in C++

	A class is a  group of related data and functions.
	A way to organize code.

	Object Oriened Program is a style you can adopt to write code.
	C# and Java are really object oriented by design.
	C++ doesn't enforce a certain style on you.
	C does not have classes and object.
	C++ does have it - group data and  functionalilty together.

	Game - representation of a player.
	data (position, speed, 3D model of player)

	variables are not organized.

	data and functions are grouped into classes.

	You can do with or without classes.
	They make life easier for programmers.

*/
#include <iostream>
using namespace std;

class Player 
	// by default, member variables are private.  Need public modifier to see member variables outside the class.
{
public:   // needed for visibility outside the class.
	int x, y;
	int speed;

	// this is a  method
	void Move(int xa, int ya)
	{
		x += xa * speed;
		y += ya * speed;
	}

};

int main()
{
	// names are too generic for a player, need to duplicate variables.
	//int x, y;
	//int speed = 2;

	//// what if you need another player.
	//// then you need to duplicate these variables.
	//int x1, y1;
	//int speed1 = 5;

	//// what about moving a player.
	//// can simplify by having a class.

	Player player;  //Player is the object, player is the instance.
	player.x = 5;   //works because x is public in the Player class
	player.Move(1, -1);

	std::cin.get();
}