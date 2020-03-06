/*
	Virtual Destructors in C++

	When you reference a base class through its derived type, and the base class gets
	deleted, you need some way to delete the memory of the derived type.

	When a class gets deleted, we need a way for its subclass memory to be deleted.  This means
	the destructor of the subclass needs to be called.

	Solution is to make the ~Base destructor virtual, so it has a vTable and should
	call the ~Derived destructor, to free up the memory, preventing memory leak.

	For that reason, any time you think a class will be subclassed, you need to 
	make the destructor for that class virtual, to guarantee vTable lookup.


*/
#include <iostream>

class Base
{
public:
	Base() { std::cout << "Base Constructor\n"; }
	// problem destructor
	// ~Base() { std::cout << "Base Destructor\n"; }
	// solution: make Base destructor virtual, force it to look through the vTable.
	virtual ~Base() { std::cout << "Base Destructor\n"; }
};

class Derived : public Base
{
public:
	Derived() { m_Array = new int[5]; std::cout << "Derived Constructor\n"; }
	~Derived() { delete[] m_Array; std::cout << "Derived Destructor\n"; }
private:
	int* m_Array;
};


int main()
{
	// base is a Base type.  Its destructor is called.  
	Base* base = new Base();
	delete base;
	std::cout << "---------------------------------------\n";
	//derived constructor needs to instantiate Base constructor first, then derived constructor
	Derived* derived = new Derived();
	delete derived;

	// problem occurs when polymorphic object is instantiated as a Base type.
	std::cout << "---------------------------------------\n";
	// Problem is that the derived destructor is never called, so its memory is not freed.
	// m_Array memory is not deleted because derived destructor is never called.
	Base* poly = new Derived();
	delete poly;

	std::cin.get();
}