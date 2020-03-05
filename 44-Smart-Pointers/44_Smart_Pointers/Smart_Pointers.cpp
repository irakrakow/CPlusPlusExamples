/*
Smart Pointers

new allocates memory on the heap, delete deallocates memory.
For smart pointers, if you call new, you don't have to call delete.
Smart pointers are wrapper around a raw pointer.

unique pointer is a scoped pointer.  When variable goes out of scope, its
memory is deleted.  Don't have to call delete.

Unique pointers have to be unique.  They cannot be copied because then
there would be two pointers pointing to the same block of memory.  When one
of the pointers dies, the other is pointing to deallocated memory, causing
a crash.

Shared pointer is a bit different from unique pointer
The way a shared pointer is implemented depends on the standard 
library and the compiler.
Uses reference counting. Keeps track of how many times pointer
is referenced.  When count gets to 0, the pointer is deleted.
Great examples of how C++ works.

Shared pointer allocates another block of memory, called a control block,
which stores the reference count.
This gets rid of the new keyword from your code.
However, it is an extra allocation.

Weak pointer does not increase the ref count.
Great if you don't want to take ownership of the entity.

Smart pointers are quite useful.  Automates memory management.

*/
#include <iostream>
#include <string>
#include <memory>   //library with smart pointer functions

class Entity
{
public:
	Entity()
	{
		std::cout << "Created Entity!" << std::endl;
	}

	~Entity()
	{
		std::cout << "Destroyed Entity!" << std::endl;
	}

	void Print() {}
};


int main()
{
	{
		std::shared_ptr<Entity> e0;
		{
			//constructor is explicit
			//std::unique_ptr<Entity> entity(new Entity);
			//preferred way
			// implements exception safety - no dangling pointer if exception is thrown
			std::unique_ptr<Entity> entity = std::make_unique<Entity>();

			// cannot copy the unique pointer - stmt below is invalid
			// std::unique_ptr<Entity> e0 = entity;

			// sharedEntity can be shared -
			// won't be destroyed until refcount = 0;
			std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
			// does not increase ref count.
			std::weak_ptr<Entity> weakEntity = sharedEntity;
			e0 = sharedEntity;


			// can call functions in the Entity class
			entity->Print();
		}

	}

	std::cin.get();
}