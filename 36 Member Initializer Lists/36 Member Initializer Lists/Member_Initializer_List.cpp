/*
	Member Initializer Lists in Constructors

	This is a way to initialize class members in a constructor.

	There are two ways to initialize class members in a constructor:
	1)  assign values in the constructor body.
	2)  member initializer list (use : and list initialization assignments

	Member variables are initialized in the order they are declared.
	Could get subtle bugs if the declaration of variables is ordered differently
	from the initialization in the initializer list.

*/
#include <iostream>
#include <string>

class Entity
{
private:
	std::string m_Name;
	int m_Score;
public:
	// default constructor with member initialized in initializer list
	Entity()
		: m_Name("Unknown"),m_Score(23)
	{
	}
	
	// constructor which takes name as a parameter
	Entity(const std::string& name)
	{
		m_Name = name;
	}


	const std::string& GetName() const { return m_Name; }
	const int& GetScore() const { return m_Score; }

};

int main()
{
	// use default constructor
	Entity e0;
	std::cout << e0.GetName() << std::endl;
	std::cout << e0.GetScore() << std::endl;

	// use constructor with string parameter
	Entity e1("Ira");
	std::cout << e1.GetName() << std::endl;

	std::cin.get();
}