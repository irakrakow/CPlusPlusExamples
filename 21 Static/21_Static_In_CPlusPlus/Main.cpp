/*
	Static In C++

	Two meanings:
	1)	Using static outside of a class or struct is visible.
		Linkage of variable is only visible to that translation unit.
	2) Inside a class or a struct, static means that the variable
		is shared with all instances of the class or struct.

	Means the same for methods.

	DON'T INCLUDE STATIC FUNCTiONS IN A HEADER FILE.
	Can get duplicate symbols.

	Use static as much as you can if you don't need
	the variable to be visible outside the translation unit.
	Can read to bad bugs.

*/

#include <iostream>

 extern int s_Variable;

 void Function() {}

int main()
{
	std::cout << s_Variable << std::endl;

	std::cin.get();
}