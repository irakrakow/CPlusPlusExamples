/*
   Object Lifetimes in C++

   Talks about how objects are allocated on the stack.
   Gentle introduction to what lifetime means for stack based variables.

   Helps to avoid crashes.
   Also once we understand this we can leverage the knowledge.

   A stack is a data structure where you stack things on top.
   Once we enter a scope, we push a stack frame on.  May or may not have data.
   Once you exit the scope, all stack allocated variables are gone.
   This can be both a blessing and a curse.

   A scope can be a function scope, a class scope, empty scope

   Automatic destruction of stack based variables.
   Scoped classes can automate memory management - automatic delete of stack variables.
   Smart pointer, scoped pointer, unique pointer.
   A smart pointer is a wrapper for the class where the object is heap allocated
   and then is destroyed as if the class was heap allocated (new)

   A timer class is an excellent example of the use of a scoped pointer.
   Mutex locking is another use.
   Threads are coming soon.
*/

#include <iostream>
#include <string>

class Entity
{	
public:
	// constructor
	Entity()
	{
		std::cout << "Created Entity! " << std::endl;

	}

	// destructor
	~Entity()
	{
		std::cout << "Destroyed Entity! " << std::endl;

	}
	

private:
	int x;  //allocated on the stack.  Destroyed when class goes out of scope.
};


int* CreateArray()

{
	//int array[50];  //not allocated on the heap. It's on the stack
	//return array;	//the pointer will still exist but the array will be gone//
	int* array = new int[50];
	return array;	//the array will persist after CreateArray goes out of scope
}

int main()
{
	int* a = CreateArray();
	
	if (true)
	{
		//we are in a function scope
		//do loop or while loop works as well


		Entity e;  //created on the stack.  Calls default constructor.
	}
	// Entity went out of scope, so it is destroyed.

	{		
		Entity* e = new Entity;  //heap allocated
	}
	//e is still around, not destroyed because it is allocated on the heap

	std::cin.get();
}  //e is destroyed here when the main function ends