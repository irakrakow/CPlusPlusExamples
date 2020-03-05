/*
	The New keyword in C++

	New is very complicated.  It's quite deep.  You need to care
	about memory, performance, and optimization.  This is important
	if you are coming from a managed program such as C# or Java.

	New allocates memory on the heap.  Based on the type the memory
	manager calculates the size of  memory. 

	C Standard Library returns a pointer to the memory address.

	New takes time.  There's something called a free list which 
	is a list of how many bytes are free.  Returns a pointer to the
	block.

	New is just an operator, like +,-, /, etc.
	You can overload operators to change behavior.
	New returns a void pointer (a pointer with no type)

	Calling new usually calls the memory allocator (malloc) function



*/
#include <iostream>
using namespace std;
using String = std::string;

class Entity {

private:
	String m_Name;
public:
	Entity() : m_Name("Unknown") {}
	Entity(const String& name) : m_Name(name) {}
	

	const String& GetName() const  { return m_Name; }
};


int main()
{
	//alloctes memory on the stack
	int a = 2;

	//allocates memory in the heap.
	//return a pointer to the beginning of the allocated block.
	//The new keyword means the memory is allocated on the heap.
	int* b = new int;
	int* c = new int[50]; //200 bytes needed, 50*4 (sizeof(int))

	//allocate memory for Entity class on the heap
	//this syntax also calls the default constructor for Entity.
	Entity* e = new Entity();

	//allocate space for 50 ints on the heap.
	//allocation is a contiguous block of memory, 1 for each Entity.
	Entity* f = new Entity[50];
	Entity* i = new(b) Entity();  //allocates at b location. placement new.

	// this does not call the constructor - just allocates memory
	malloc(50);  //returns a void pointer.
	// also works to allocate space for entity.
	malloc(sizeof(Entity));

	// need to cast the pointer to an  Entity*.
	// this actually calls the constructor
	Entity* g = (Entity*)malloc(sizeof(Entity));

	//need to use delete function to deallocate memory
	// delete is also an operator
	// memory is not released back to the free list unless you specifically call delete
	delete e;
	delete[] f;  //deallocate the array.
	delete g;

	std::cin.get();
}