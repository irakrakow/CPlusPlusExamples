/*
	Virtual Functions in C++

	Virtual functions allow us to override methods in subclasses.

	If you create a function in the superclass and mark it as virtual, you can
	override the function in a subclass.  

	Need a vtable which is a table of all virtual functions in the 
	base class.
	Dynamic dispatch makes the function virtual.
	*/
#include <iostream>
#include <string>

class Entity
{
public:
	// adding "virtual" makes the compiler look in the vTable
	// for overwritten functions.
	virtual std::string GetName() { return "Entity"; }
};


class Player : public Entity
{
private:
	std::string m_Name;
public:
	Player(const std::string& name)
		:m_Name(name) {}

	std::string GetName() { return m_Name; }
};



int main()
{
	Entity* e = new Entity();
	std::cout << e->GetName() << std::endl;

	Player* p = new Player("Cherno");
	std::cout << p->GetName() << std::endl;

	Entity* entity = p;
	std::cout << entity->GetName() << std::endl;





	std::cin.get();
}