/*
	Local Static In C++

	You can use static in a local scope.
	Two considerations when declaring a variable:
	1)  Lifetime (how long the variable remains in memory)
	2)  Scope (where we can access the variable - inside a function)

	static local variable has an infinite lifetime, but scope is
	limited to the function or class or if statement.

	declaring a variable static in a local scope prevents references
	from outside that scope.

	Can prefix a Singleton instance with static.

	Using static in this way reduces need for static initializers.

*/
#include <iostream>

class Singleton
{
private:
	static Singleton* s_Instance;  //only one instance of Singleton
public:
	static Singleton& Get() { return *s_Instance; }

	void Hello() { std::cout << "Hello\n"; }
};

Singleton* Singleton::s_Instance = nullptr;


//int i = 0;  // i defined outside of Function;
void Function()
	
{
	static int i = 0; //only one instance of i.  First time, initialized to 0.
	//int i = 0; //i created each time, then incremented by 1.  Prints 1 five times.
	i++;
	std::cout << i << std::endl;
}

int main()
{
	// call Hello function from the singleton instance.
	// can use this statically
	Singleton::Get().Hello();

	//increments i every time Function is called if i is static.
	//prints 1 five times if i is not static.
	Function();
	Function();
//	i = 10;   // if i isdefined outside of Function(), calling Function() 5 times changes results a lot.
	Function();
	Function();
	Function();
	std::cin.get();
}