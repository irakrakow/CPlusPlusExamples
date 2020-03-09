/*
	Static Linking

	In Java, C#, or Python, you might be using a package manager to link libraries statically.
	In C++ everyone seems to have problems.

	TheCherno hates the idea of package managers.  He likes to have everything needed available
	without having to link to external libraries.  There should be no need to sync up with package
	managers or downloading other libraries.  Clone the repository and have the code just compile and
	run.

	TheCherno has copies of the physical binaries or code for each version of the program.
	In Visual Studio, add another project which contains the source code of the library, then
	build everything.

	This tutorial example links against binaries.  This example uses the GLFW library.
	Compiling the binaries helps with debugging, can modify the library frequently.

	GLFW.org is the library for this example.

	32 bit binaries or 64 bit binaries?  This has nothing to do with the OS of your computer.
	Choose based on the target solution, not the solution you are developing on.  If you don't do that,
	the libraries won't link.  .x86 and .x32 are 32 bit binaries.  x64 is the 64 bit binary.

	There are two parts to a library, usually.  These are the include files and the library files.
	Include files have the headers, and the library files have the implementation of the library
	functions.

	In static linking, the library is included in the program's executable.
	In dynamic linking the library is a separate file from the executed, and the library is
	loaded at run time. An example is  the LoadLibrary function in the Windows API, which
	loads the library at run time.

	TheCherno likes static linking whenever possible because all the code is in one place.
	Static linking is also faster than dynamic linking.

	These are symbol declarations because they could be variables.

	You need to tell the linker where the library files are.
	Static Linking:
	TheCherno create a folder called GLFW and copies the Include and lib-2019 folders into the GLFW folder.
	glfw3.lib is the static library.
	glfw3.dll is the dynamic link libary
	glfw3dll.lib are the headers for the dll, so that we don't need to load each function individually.

	Right click on the project, click on Properties, then C/C++ General, add the directory
	in Additional Include Directories.  Change to All Platforms and All Configurations.

	The path should be relative to the folder where the solution file is.
	Use the $SolutionDir macro.
	Can see all the macros by clicking the Macros>> button.
	The path for the dll is relative to $(SolutionDir)
	With angular brackets, the compiler searches the compiler include paths first, then all include paths.
	If the library is included in the solution, he uses angle brackets.
	If it's external to the project, he uses quotes.

	Need to add additional library directory for folder containing GLFW library.
	It is in the Linker section  (General)

	14:58 problem with the library include path.

*/
#include <iostream>
#include "GLFW/glfw3.h"
// since this is a compiler include path, you can also do:
// need to tell the linker where the library is.
//#include <GLFW/glfw3.h>

// this would work bit we want the real function in the GLFW library, not a dummy function.
//int _glfwInit() { return 0; }


int main()
{
	//_glfwInit() is a function in the glfw library.

	int a = _glfwInit();
	std::cout << "a: " << a << std::endl;

	std::cin.get();

}