/*
	How The C++ Linker Works

	Linking is a process where we go from our C++ source file to create an actual executable binary.
	The first stage is compiling the source file.
	The second stage is to find out where each symbol and function is and link them together.

	Each file is compiled into a separate object file as a translation unit.
	The object files have no relation to each other.

	If we decide to split our program into multiple C++ programs, we need a way to link those files
	together into one executable program.

	Even if you write all the code in one .cpp file, the linker still needs to do its thing.
	It needs to know where the entry point is, i.e., where the main function is.

	When you actually run the application, the C++ runtime library needs to know where the entry point is.
	The definition needs to have the same calling convention as the definition.

	Symbols might have a different decorated name in the definition as opposed to
	the declaration.

	In C++, unlike C, global constants have a static linkage.

	The messages the compiler generates are different than the linker messages.
	The compiler error messages start with C.  The linker messages start with LNK.

	If the configuration type is Application, the program needs an entry point.
	In the Linker section of the properties window, the Advanced section lets you
	set an entry point other than main.

	Put the function declaration and definition in different files.

	Undefined external symbol link error occurs when declaration doesn't match definition of function.
	Linker message actually tells us where the unresolved external symbol is.

	If the Multiply function is never called, no linker error is produced.

	Signature (including return type) needs to match in function declaration and definition.
	Number of parameters need to match as well.

	Two identically named functions with the same signature will produce an error as well.

	Use static or inline keywords to avoid duplicate symbol linking errors.

	The linker also links to other C and C++ libraries that we may be using, like our platform
	libraries, the C standard library, and so on.

*/
#include <iostream>

//add declaration of Log function
void Log(const char* message);

// needs a main() function


int Multiply(int a, int b)
{
	Log("Multiply");
	return a * b;
}

// compiler catches duplicate function.
//int Multiply(int a, int b)
//{
//	Log("Multiply");
//	return a * b;
//}

// overloaded function
int Multiply(int a, int b, int c)
{
	Log("Multiply");
	return a * b;
}

// supplying a main function causes the program to build successfully.
int main()
{	
	std::cout << Multiply(5, 8, 9) << std::endl;
	std::cin.get();
	return 0;
}