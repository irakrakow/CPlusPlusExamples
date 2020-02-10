/*
	How The C++ Linker Works
	
	Linking is a process where we go from the C++ source files
	to create an object file (as a translation unit).

	If we split our files across multiple C++ process we need
	a way to link all the transation units.

	Differentiate between compiling and linking.
	If you press CTRL+F7 you just compile the .cpp file.
	If you press CTRL+F5 you do both compiling and linking.
	This program needs a main function to define the entry point.
	The link step will produce that message.
	Linker error messages start with LNK.
	Compiler error messges start with C.  Syntax error is an example.

	Application - General -  Properties set to Application indicates
	that a Main method is needed.
	Entry point doesn't need to be the Main function.  Can be any function.

*/

#include <iostream>
using namespace std;
//#include "Log.cpp"

void Log(const char* message);


int Multiply(int a, int b)
{
	Log("Multiply");
	return a * b;
}

int foo()
{
	Multiply(5, 3);
	return 0;
}

int main()
{
	cout << Multiply(5, 8) << endl;
	cin.get();
}