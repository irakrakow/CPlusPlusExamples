/*
	Local Static In C++

	You can use static in a local scope.
	Two considerations when declaring a variable:
	1)  Lifetime (how long the variable remains in memory)
	2)  Scope (accessibility of the variable - inside a function)

	static local variable has an infinite lifetime, but scope is
	limited to the function or class.

	declaring a variable static in a local scope prevents references
	from outside that scope.

	static - can 

*/
#include <iostream>

class Singleton
{
private:
	static Singleton* s_Instance;
public:
	static Singleton& Get() { return *s_Instance; }

	void Hello() { std::cout << "Hello\n"; }
};

Singleton* Singleton::s_Instance = nullptr;

void Function()
{
	static int i = 0; //only one instance of i
	i++;
	std::cout << i << std::endl;
}

int main()
{
	Singleton::Get().Hello();
	
	Function();
	Function();
	Function();
	Function();
	Function();
	std::cin.get();
}