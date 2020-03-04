/*
Mutable Keyword

Mutable has two different uses.
One is associated with const.
The other is used with lambdas.

Mutable means something that can change.
Immutable means something that cannot be changed.
Mutable is "kind of" const.

Used with class methods.  If a variable is mutable it can be changed from a const method.

A lambda is a little throwaway function.

*/
#include <iostream>
#include <string>

class Entity
{
private:
	std::string m_Name = "Sandy";
	mutable int m_DebugCount = 0;  //count how many times a method is called
public:
	// first const means GetName() cannot be changed.
	// second const means GetName cannot modify anything in Entity.
	const std::string& GetName() const
	{
		// illegal because const function cannot modify m_Name
		// m_Name = "Ira";
		std::cout << m_Name << std::endl;

		// cannot do this unless m_DebugCount is mutable (called from const function)
		m_DebugCount++;
		std::cout << m_DebugCount << std::endl;
		return m_Name;
	}
};

int main()
{

	const Entity e;
	e.GetName();   // can do this because e can invoke a const function
	e.GetName();

	int x = 8;
	// lambda function
	auto f = []()
	{
		std::cout << "Hello " << std::endl;
	};

	// Lambda function with parameter
	auto g = [&]()mutable
	{
		// allows g to change x
		x++;
		std::cout << x << std::endl;
	};

	f();
	// increment is visible outside the function because pass by reference
	g();
	g();
	std::cin.get();
}