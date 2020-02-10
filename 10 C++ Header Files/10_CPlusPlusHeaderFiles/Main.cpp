/*
	C++ Header Files

	Header files are kind of special to C++.  The header file is separate from the .cpp file
	(the translation unit).  Header files declare certain types of functions that are declared.
	Usually the body is empty.

	Ctrl+F7 compiles the program.  The declaration is  needed to declare that the function
	exists somewhere.  Copy the signature to a file, have the .cpp know about it.  

	Need to copy and paste the declaration in each .cpp file.  The #include directive contains
	the declarations, in a header file (.h). The file is copied and pasted.

	#include <iostream> which is really a file.  Any file starting with a hash (#) means 
	it is read by the preprocessor.  If you #include the same header file in a single
	translation unit with no header guards, then you will get redefinition errors.   See
	Struct Player.

	You could have a chain of #inludes which could easily #include a header file multiple
	times.  #pragma once or IFDEF for a symbol will prevent multiple inclusions of a
	header file.

	Added Line 23

	#pragma once is supported by most C++ compilers in industry.

	"" includes relative paths.
	<>  angle brackets just have to be in one of the #include directories.

	You can use quotes anywhere.

	<iostream> doesn't have an extension.  Separates C from  C++ standard libraries.

	In VS if you hit Open Document and Open Containing Folder you will find the header files.

*/

#include <iostream>
#include "Log.h"

void Log(const char* message) {

	std::cout << message << std::endl;
}

int main() {
	
	InitLog();

	//these two statements work the same
	Log("Hello World");
	std::cout << "Hello World " << std::endl;
	std::cin.get();

}