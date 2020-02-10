/*
	String Literals

	In depth followup to #32 - Strings in C++
	character 0 has a different numeric value than \0

	In MSVC string literals are stored in a read only section of memory
*/

#include <iostream>
#include <string>

// standard C library
#include <stdlib.h>

int main()
{
	//intellisense indicates const char[7] because of null termination chaacter.
	const char name[8] = "Cherno";
	// null termination character in middle of string breaks behavior of C string.
	const char name2[] = "Che\0rno";

	std::cout << name2 << std::endl;
	std::cout << strlen(name2) << std::endl;  // returns 3 because of embedded null termination character.

	const char* name4 = u8"Ira";
	// name4[2] = 'd'; illegal, name4 is a char pointer

	//char* name5 = "Laura";
	//name5[2] = 'o';  
	//std::cout << name5 << std::endl;  //illegal - cannot convet from const char[6] to char*

	const wchar_t* name7 = L"Cherno"; //wide char pointers need L prefix
	std::cout << name7 << std::endl;

	const char16_t* name22 = u"Ira";
	std::cout << name22 << std::endl;
	std::cin.get();
}