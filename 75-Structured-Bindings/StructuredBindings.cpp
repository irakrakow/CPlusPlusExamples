/*
	Structured Bindings in C++

	This is specific to C++ 17.
	Structured bindings lets you deal with multiple return values a little better.

	This deals with tuples, pairs, and things like that.
	theCherno likes instances of structs.
	That has changed with structured bindings.

	Makes the code still manageable.

	The structured bindings example requires that the compiler C++ language standard is set to C++17

*/
// old way - use return name and age of a Person
#include <iostream>
#include <string>
#include <tuple>

// do not need to create a struct, or pass parameters by reference or by a pointer
std::tuple<std::string, int> CreatePerson()
{
	return { "Cherno",24 };
}

int main()
{
	// can use a tuple
	std::cout << "..............using std::tuple-----------\n";
	std::tuple<std::string, int> person = CreatePerson();
	
	// alternatively
	auto person1 = CreatePerson();

	// challenge is to get the template arguments
	// get name (index 0)
	// works with person or person1 tuple
	std::string& name = std::get<0>(person1);
	std::cout << "name: " << name << std::endl;
	//get age (index 1)
	int& age = std::get<1>(person1);
	std::cout << "age: " << age << std::endl;

	// can also use std::tie
	std::cout << "..............using std::tie--------------\n";
	std::string name3;
	int age3;
	std::tie(name3, age3) = CreatePerson();
	std::cout << "name3: " << name3 << std::endl;
	std::cout << "age3: " << age3 << std::endl;

	// using strutured bindings (C++17)
	std::cout << "-------------Using structured bindings  (C++17)------\n";
	auto[name4, age4] = CreatePerson();
	std::cout << "name4: " << name4 << std::endl;
	std::cout << "age4: " << age4 << std::endl;

	std::cin.get();

}