/*
	Strings in C++

	Strings are tied to arrays.
	Strings are a group of characters, basically text.
	A string is a way to manipulate text.

	Characters are represented in various forms.
	A char is one byte.
	C++ treats strings as an array of chars.  Works for ASCII.
	Characters can be more than one characters.  In 1 byte only can represent 256 characters.
	We cannot fit all languages in one byte.

	Text repesentation is a huge problem.
	A string is an array of characters (for ASCII).

	Asciitable.com is a Web page of ASCII characters.
	The null termination character is how the string ends.
	A string begins at the memory address of the pointer, and ends at the null character.

	The standard library in C++ has a class called <string>
	The library has a basic string class and a string class templated with char data type.
	This is a template specialization of the basic string class.

	Need to include <string> if you want to print the string.
*/

#include <iostream>
#include <string>

int main()
{
	// C style string
	// const because strings are immutable.
	// do not need to delete the char pointer.
	// name points to the start of a memory block that contains "Cherno"
	const char* name = "Cherno";

	// illegal:  name cannot be changed.
	//name[2] = 'D';

	

	// array of characters
	char name2[] = { 'I', 'r', 'a' };
	name2[1] = 'd';  // legal because we are defining an array of chars.
	//name2[4] = 0;

	// array of characters
	// debug version inserts cc as array guards.
	char name3[] = { 'S', 'a', 'n', 'd', 'y',0 };

	std::string name4 = "Laura";
	// illegal: cannot add 2 const char arrays
	// std::string name5 = "Laura " + "Sam ";



	std::cout << name << std::endl;
	// illegal
	//name + " and Sam");


	//cout outputs name2 until the null character is encountered.
	std::cout << name2 << std::endl;
	//does not print out garbage characters - null terminated.
	std::cout << name3 << std::endl;

	// C++ string - need to include <string> in order for this to work.
	std::cout << name4 << std::endl;

	// can use methods ini the string class
	std::cout << name4.size() << std::endl;
	
	std::cin.get();
}