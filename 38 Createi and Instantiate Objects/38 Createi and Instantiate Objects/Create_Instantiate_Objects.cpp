/*
	Creating and Instantiating Objects

	C++ has a number of ways of creating an object.
	We need to instantiate a class unless the class is completely static.

	Which memory do we instantiate an object?
	Choose stack or heap.
	Stack objects have an automatic lifespan, controlled by the scope where the object lives.

	The heap is different.  The object sits there unless you explicitly delete it.
	Get memory leaks if you forget to delete an object.

	Preference is the stack.  Less memory management, faster.
	Deallocation is automated.

	One reason to allocate on the heap is if you want the object to live beyond its scope.
	Another reason is if the object is really large because the stack is small

	Performance and the need to delete the object explicitly are disadvantages
	of allocating on the heap.

	Smart pointer can automate the delete of heap allocated objects.

	Stack is quite small  (1MB, 2MB depending on compiler)

	The "new" keyword is the key to heap allocation.
	In C# or Java you cannot allocate an object on the stack. It is allocated on the heap.
	Java and C# are "managed" languages.
	Using the new keyword in C++ everywhere is bad coding practice.

	If you use the new keyword, you use the delete keyword to free the object's memory

*/
#include <iostream>
#include <string>

using String = std::string;

class Entity
{
private:
	String m_Name;
public:
	Entity() :m_Name("Unknown") {}  //no parameters, sets m_Name to "Unknown"
	Entity(const String& name) : m_Name(name) {} //pass name as parameter

	const String& GetName() const { return m_Name; };  //setter method
};

void Function()
{
	// this object is destroyed when the program hits the endbrace.
	// need to allocate on the heap if you want the function to live beyond this scope.
	int a = 2;
	Entity entity = Entity("Cherno");
}

int main()
{
	Function();   //the Function() stack frame is created, but is destroyed when
				  //the function  goes out of scope.
	
	// create on stack
	std::cout << "------------------Create an object on the stack------" << std::endl;
	Entity entity;  //calls default constructor.  In C# or Java looks like null ptr.
	std::cout << entity.GetName() << std::endl;  //prints "Unknown"

	std::cout << "------------------Specify a name-------------" << std::endl;
	Entity entity2("Cherno");
	std::cout << entity2.GetName() << std::endl;  //prints "Cherno"
	
	std::cout << "------------------Add the type-------------" << std::endl;
	Entity entity3 = Entity("Chernobyl");
	std::cout << entity3.GetName() << std::endl;  //prints "Cherno"



	std::cin.get();
}

