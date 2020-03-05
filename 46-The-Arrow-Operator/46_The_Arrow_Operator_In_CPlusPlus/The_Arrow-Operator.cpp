/* 
	The Arrow Operator

	The arrow operator is used for struct and class pointers.
	The arrow operator can be overloaded as well.

	You can get the offset of a member variable in memory
	with the arrow operator.  Works with structs or classes.

*/
#include <iostream>
#include <string>

struct Vector3
{
	// find offset of x, y, or z
	float x, y, z;
	
};

class Entity
{
public:
	int x;
	void Print() const { std::cout << "Hello" << std::endl; }
};

class ScopedPtr
	// automatically deletes the object when it goes out of scope.
{
private:
	Entity* m_Obj;
public:
	ScopedPtr(Entity* entity)
		:m_Obj(entity)
	{
	}

	~ScopedPtr()
	{
		delete m_Obj;
	}

	//overload -> operator
	Entity* operator->()
	{
		return m_Obj;
	}
	
	// const version of overloaded -> operator
	const Entity* operator->() const
	{
		return m_Obj;
	}
};


int main()
{	
	// with overloaded -> operator
	ScopedPtr ScopedEntity = new Entity();
	ScopedEntity->Print();



	// regular way of creating object, on the stack
	Entity e;
	e.Print();  // no problem

	// calling a function is a  problem if Entity is a pointer
	Entity* ptr = &e;
	// cannot call a function via the dot
	// need to use the arrow operator.
	ptr->Print();

	//can derefence the pointer
	Entity& entity = *ptr;
	ptr->Print();

	// can also dereference like this:
	(*ptr).Print();

	// looks clunky.  Arrow operator makes code look simpler
	// dereferences the pointer to a normal Entity type.
	ptr->Print();

	// can reference variables through the pointer as well
	ptr->x = 2;

	// trick: access offset of member variables from 0
	// reference the struct Vector3
	// offset will contain the offset from 0
	// floats are 4 bytes so x is offset 0, y offsets 4, z offsets 8
	int offset = (int)&((Vector3*)nullptr)->x;
	std::cout << "x offset: " << offset << std::endl;

	offset = (int)&((Vector3*)nullptr)->y;
	std::cout << "y offset: " << offset << std::endl;
	 
	offset = (int)&((Vector3*)nullptr)->z;
	std::cout << "z offset: " << offset << std::endl;
	std::cin.get();
}