/* 
	Unions in C++

	A union is somewhat like a class type or a struct type.
	A union can occupy the memory of only one member at a time.

	A struct with 4 floats has a memory size of  4 * 4 or 16 bytes.
	Size of a struct keeps growing as you add more members.

	A union can have only one member.
	A union with 4 floats only has a size of 4 bytes, which is the size of the first float.

	You can add static functions to a union, but you cannot have virtual functions.
	Unions are closely linked to type punning.
	You can give two different names to the same variable.  So x, y, z could be addressed as R, G, B (color)
	in a Vector3 class.  x aligns with R, y aligns with G, z aligns with B.

	Usually, unions are used anonymously, which means you do not give them a name, although a union
	can be named.

	The example with Vector4 and Vector2 shows that with the union, the memory
	for the two Vector2 structs maps to the same memory as the 1 Vector4.



*/
#include <iostream>

struct Vector2
{
	float x, y;
};





struct Vector4  // looks like 2 Vector2 vaiables 
{
//  without union
//	float x, y, z, w;

	// using a struct wrapper.  The struct is one variable.
	union
	{
		// 1 Vector4
		struct
		{
			float x, y, z, w;
		};
		// 2 Vector2s maps a to x,y and b to z,w
		struct
		{
			Vector2 a, b;
		};
	};

};

void PrintVector2(const Vector2& vector)
{
	std::cout << vector.x << ", " << vector.y << std::endl;
}

int main()
{
	struct Union
	{
		union
		{
			float a;
			int b;
		};
	};
	 
	Union u;
	u.a = 2.0f;  // a is the float representation of 2; b is the int representation of 2
	std::cout << u.a  << ", " << u.b << std::endl;

	Vector4 vector = { 1.0f, 2.0f, 3.0f, 4.0f };
	//vector.x = 2.0f; //allowed
	PrintVector2(vector.a);
	PrintVector2(vector.b);
	vector.z = 500.0f;  // modifies z 
	std::cout << "===========================================================\n";
	PrintVector2(vector.a);
	PrintVector2(vector.b);


	std::cin.get();
}
