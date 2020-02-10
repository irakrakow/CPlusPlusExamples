/*
	Pure Virtual Functions (interfaces)

	Similar to an abstract class or interface.
	Define a function in the base class.
	Force the subclass to implement the function.
	No default implementation in the base class.

	A base class can consist of only virtual methods with no implementation
	and the force each subclass to implement them.

	Cannot instantiate the class because there are no implementations,
	only the declarations.

	Interfaces are just classes in C++.

*/
#include <iostream>
#include <string>

class Entity
{
public:
	// adding "virtual" makes the compiler look in the vTable
	// for overwritten functions.
	// Substituting "=0" instead of an implementation makes the function
	// pure virtual.

	virtual std::string GetName() = 0;
};


class Player : public Entity
{
private:
	std::string m_Name;
public:
	Player(const std::string& name)
		:m_Name(name) {}

	//need to provide an implementation for GetName in subclass
	std::string GetName() override { return m_Name; }
};



int main()
{
	// cannot instantiate the Entity class because it is pure virual.
	//Entity* e = new Entity();
	//std::cout << e->GetName() << std::endl;

	Entity* p = new Player("Cherno");
	std::cout << p->GetName() << std::endl;

	Entity* entity = p;
	std::cout << entity->GetName() << std::endl;





	std::cin.get();
}