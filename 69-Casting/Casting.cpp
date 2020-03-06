/*
	Casting in C++

	Will talk about both C and C++ styles of casting.
	Casting means conversions within the type system.
	C++ is a strongly typed language, and types are enforced.

	If you declare a variable as an int, you can't use it as some other type.  You need to cast it
	to another type (double, float, etc.), although there are implicit type conversions that don't need casts.
	Implicit conversion is done if the compiler can figure out.

	C style casts.  They add "syntax sugar" to your code.
	static_cast, reinterpret_cast, dynamic_cast, const_cast
	dynamic_cast returns null if the conversion was not successful.  It does run-time checks.
	reinterpret_cast puts into words type punning (reinterpreting memory as something else)
	const_cast (removing const, or adding const)

	You can search for these casts in your code base.

	Dynamic_cast ties in to RTTI (run time type information)

	TheCherno uses C style casts more frequently.
	const_cast used mostly to remove the const keyword.

*/
#include <iostream>

class Base
{
public:
	Base() { std::cout << "Base Constructor\n"; }
	virtual ~Base() { std::cout << "Base Destructor\n"; }
};

class Derived : public Base
{
public:
	Derived() {}
	~Derived() {}
};

class AnotherClass : public Base
{
	AnotherClass()  {}
	~AnotherClass() {}
};


int main()
{
	int a = 5;
	double value = a;  //value is a double and can be cast to an int when assigned to a. No data loss
	std::cout << "a: " << a << std::endl;
	std::cout << "value: " << value << std::endl;

	// implicit conversion, d is truncated to 5
	double value1 = 5.25;
	int d = value1;
	d = (int)value1;  //also works - can explicitly cast.
	std::cout << "value1: " << value1 << std::endl;
	std::cout << "d: " << d << std::endl;

	double e = (int)value + 5.25;  // C style cast.  10.25 because value is truncated
	std::cout << "e: " << e << std::endl;

	double f = (int)(value1 + 5.3);  // C style cast.  10 becase addition takes place, then truncation.
	std::cout << "f: " << e << std::endl;

	// C++ style cast - static_cast will check at compile time whether conversion can be done.
	double s = static_cast<int>(value1) + 5.3;  // cast value1 to an int: 5.3 + 5
	std::cout << "s: " << s << std::endl;

	// dynamic cast
	Derived* derived = new Derived();

	Base* base = derived;
	// is the Base pointer an instance of the Derived class or of AnotherClass instance?
	// both extend Base

	// ac is actually a derived instance, but we cannot tell that
	AnotherClass* ac = dynamic_cast<AnotherClass*>(base);
	


	std::cin.get();
}