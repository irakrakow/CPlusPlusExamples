/*

	Classes vs Structs in C++

	The difference is that by default, variables are private in a class.
	Variables are public in a struct.

	Needed for compatibility with C.
	Could use #define struct class to get compatibility.
	However, it confuses readers of the code.

	Differences come to usage.  
	Breaks semantics of classes.

	Structs are for "POD" (plain old data - a bunch of variables
	Could argue that a clas groups variables too.

	Comes down to usage.

	Never use inheritance with structs.
	Might produce compiler warnings or errors.

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

struct Vec2
{
	float x, y;

	void Add(const Vec2& other) {
		x += other.x;
		y += other.y;
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

	Vec2 vec2;
	vec2.x = 3;
	vec2.y = 5;
	cout << vec2.x << endl;
	cout << vec2.y << endl;
	
	Vec2 anothervec2;
	anothervec2.Add(vec2);


	std::cin.get();
}