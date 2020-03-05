/*
	Operator overloading

	Operator is a symbol instead of a function to perform something.
	Deference, ->, +=, &, new, delete, comma are operators
	Comma and () are operators.

	These can be overloaded.
	Overloading means  giving a new  meaning to the operator.
	Change the behavior of an operator.
	Not supported in Java.
	Partially supported in  C#

	Can be a good thing but also a bad thing.
	Operators are just functions.
	Helps to clean up your code.
	However, should be used meaningfully.

	If people need to go to the definition of the operator,
	then the overloading is over the top.

	Operator overloading is like the toString function in Java or C#.

	== operator can be overloaded in C++
	Java has the equals function but it cannot be overloaded.
*/

#include <iostream>
#include <string>

struct Vector2
{
	float x, y;

	Vector2(float x, float y) :
		x(x), y(y) {}

	Vector2 Add(const Vector2& other) const
	{
		return Vector2(x + other.x, y + other.y);
	}
};



int main()
{
	Vector2 position(4.0f, 4.0f);
	Vector2 speed(0.5f, 1.5f);

	// without operator overloading
	// add two Vector2 objects, return a new Vector2 object
	Vector2 result = position.Add(speed);

	std::cin.get();
}
