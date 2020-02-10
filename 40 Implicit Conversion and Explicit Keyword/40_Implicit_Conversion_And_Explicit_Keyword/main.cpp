/*
	Implicit Conversion and Explicit Keyword

	Implicit means "automatic".  The compiler can perform only one
	explicit conversion on your code.  C++ will perform the conversion
	without you having to cast it.

	explicit keyword disables implicit conversion.
*/

#include <iostream>
#include  <string>
using namespace std;

class Entity
{
private:
	std::string m_Name;
	int m_Age;
public:
	Entity(const std::string& name)
		:m_Name(name), m_Age(-1)
	{}
	
	// disable implicit conversion
	//	explicit Entity(int age) :
	Entity(int age) :
		m_Name("Unknown"), m_Age(age) {}
};

void PrintEntity(const Entity& entity)
{
	//Print
}

int main()
{
	//works because Entity has a constructor that takes an int.
	//So 22 is cast to an Entity reference implicitly
	//PrintEntity now prints as if 22 is an Entity.
	PrintEntity(22);

	//does not work.
	//The constructor for Entity takes a char array.
	//"Cherno" is  a string, so there's no way to convert
	//a char array to a string.
	//PrintEntity("Cherno");

	//this works
	//wraps the parameter with std::string
	PrintEntity(std::string("Cherno"));

	//this also works.  Explicitly wraps Entity as string.
	PrintEntity(Entity("Cherno"));

	
	//normal ways of defining an entitys
	Entity a("Cherno"); //string reference
	Entity b(22);       //int 

	//you cannot use assignment as. 
	//Entity c = "Cherno"; 

	//implicitly converts the 22 (int) to an Entity.
	//there's a constructor that takes an int, so
	//the C++ compiler will cast the 22 to an Entity.
	Entity d = 22;
	//the 22 is explicitly converted to an Entity. No Entity constructor just takes a string.
	//Entity e = 22;   //fails

	// this is more clear
	Entity g(22);




	std::cin.get();
}
