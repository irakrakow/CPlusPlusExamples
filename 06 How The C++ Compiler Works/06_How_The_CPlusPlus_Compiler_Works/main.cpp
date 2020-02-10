/*
	How The C++ Compiler Works

	The C++ code is just text.  We need to go from the text form
	to an executable binary.

	Two steps:
	1)  Compiling
	2)  Linking
	I added a line

	The compiler takes the source code and outputs an object (.OBJ) file.
	Preprocessor done first, then tokenizing into an abstract syntax tree.

	The compiler converts all of our code into constant data and instructions.
	The code is the actual machine code that the computer executes.

	The compiler creates an object file for every .cpp file.
	The .cpp file is called a "translation unit".

	The C++ compiler doesn't care about files.
	In Java, your class name has to be tied to your file name.
	Also, your file name has to be included in a package, as
	physical files.

	In C++ a file is a way to feed source code to the compiler.
	The compiler assumes that a file with the .cpp extension is a
	C++ file, or a file with the .c extension is a file with  C
	source code, or .h is a C++ header file.  These can be
	overridden.

	A file that we tell the compiler is a  C++ file is compiled
	into a translation unit.  Each translation unit is compiled
	into a .obj file (object file).

	You can put a lot of .cpp files into one .cpp file.  Then
	there is just one .obj file produced, which is the combination
	of all the .cpp files included.





*/

#include <iostream>

void Log(const char * message);

int main()
{
	Log("Hello World!");
	std::cin.get();

}