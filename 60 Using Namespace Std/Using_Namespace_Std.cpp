/*
	Why TheCherno Doesn't Like using namespace std

	Opinion based.  He is asked this question almost daily.
	There are a lot of std:: prefixes which would be unnecessary if you have using namespace std.

	The using statement can be confined to a scope.
	Can be useful if you use your own namespaces.

	If you don't use using namespace, it's easy to point out when the code is using 
	the standard library vs. other libraries because they all have the prefix std::

	TheCherno works at Electronic Arts.  They rewrote the C++ standard library
	and called it eastl.  So there will be tons of name conflicts if the prefix isn't used
	because it's a replacement for the std:: library.

	As an example, they wrote a replacement for std::vector.  Need to prefix with eastd:: to get
	the right vector class (original or replacement).  Would need to search throughout the code
	to find the right vector class.

	Also if someone writes a using namespace eastd:: somewhere then the compiler won't know
	which symbol vector refers to.

	If one version of print uses a const char* instead of a string and they are both named
	print, C++ will do an implicit conversion.  Could produce a "silent runtime error"
	where the wrong function is called.

	Never...never...code using namespace std; in a header file.





*/
#include <iostream>
#include <vector>
#include <algorithm>

void ForEach(const std::vector<int>& values, void(*func)(int))
{
	for (int value : values)
		func(value);
}

int main()
{
	std::vector<int> values = { 1, 5, 4, 2 , 3 };
	ForEach(values, [](int value) { std::cout << "Value: " << value << std::endl; });
	std::cin.get();
}