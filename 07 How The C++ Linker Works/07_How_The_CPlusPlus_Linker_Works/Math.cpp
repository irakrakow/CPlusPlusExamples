/*
	How The C++ Linker Works
	
	Linking is a process where we go from the C++ source files
	to create an object file.  

	If we split our source code across multiple .cpp files we need
	to compile our .cpp files, producing a .obj file for each translation unit.
	The linker will stitch together all the .obj files and produce an .exe (executable binary).

	The primary purpose of linking is to find where each symbol and function is.  The .obj files cannot
	interact.  The application needs to know where the main function is.


	Differentiate between compiling and linking.
	If you press CTRL+F7 you just compile the .cpp file.
	If you press CTRL+F5 you do both compiling and linking.
	This program needs a main function to define the entry point.
	The link step will produce that message.
	Linker error messages start with LNK.
	Linker Advanced setting lets you define an entry point other than main().

	Compiler error messges start with C.  Syntax error is an example.
	Even if you have all the code in one .cpp file, the linker needs to run in order to
	determine where the entry point is (typically, the main function)

	The C runtime library then knows where to start code execution.

	Application - General -  Properties set to Application indicates
	that a Main method is needed.
	Entry point doesn't need to be the Main function.  Can be any function.

	"Unresolved external symbol" message is produced when the linker cannot find the symbol.

	If a function is never called, the linker doesn't need to find its definition.

	If a function is defined as static, then the linker knows that the function exists only in that translation unit.

	The function needs to have in its declaration, the same return type, number and type of parameters, to get a match.

	Duplicate symbol error occurs when the linker finds two or more declarations of the same symbol or function
	with the same return type, and the same number and type of parameters.
	The compiler can catch some duplicate symbols (e.g., in the same translation unit).



*/

#include <iostream>

void Log(const char* message);



int Multiply(int a, int b)
{
	Log("Multiply");
	return a * b;
}

int main()
{
	Log("Hi Ira");
	std::cout << Multiply(5, 8) << std::endl;
	std::cin.get();
}