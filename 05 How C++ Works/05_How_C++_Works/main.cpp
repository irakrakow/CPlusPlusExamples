/*
How C++ Works

How to go from the source file, the text file, to an executable binary.
This is an overview of the pipeline to convert the .cpp files to an executable binary.


You start with a source file, a C++ file (.cpp), and end up with an executable binary (.obj, .dll, .exe)

#include <iostream> statement
This is a preprocessor statement.
Anything that begins with a # is a preprocessor statement.
Happens before the compilation.
Take the specified file, and copy/paste into the current file.
The included files are typically called header files.
We need a declaration for the function called cout, which prints
stuff to the console.

main function
Every C++ program has something like this.
The main function is the entry point of the program, where
the program starts executing lines of code.
The program starts execution at the entry point in order,
unless we instruct it to do otherwise.
Control flow statements, or calls to other functions, typically
cause the program to go somewhere else in memory.

First thing that gets executed (instruction) is the cout statement,
which prints stuff to the console.

The next instruction causes the program to pause until the user
presses the Enter key.

Finally, the program ends, when the right curly brace is recognized.

The return type for the  main function is int, but the program
is supposed to return an int.  However, main() is a special function,
where the return statement is not required.  The program returns
0 actually.  This is a special case for the main function.

The << syntax
Looks strange (left angular brackets) are just an overloaded operator.
<< is an operator (like +, -, etc.).
An operator is actually a function.

We are pushing the Hello World string to the cout function.
cout prints to the console.
cin goes the other way, from the console to the program.
endl means advance to the next line.

That's our source file (main.cpp)

#include <iostream> gets processed first.
Copy / paste operation. Header file.

Then the file gets compiled.  The program translates the actuall C++
code into machine code.

Solution Configuration vs. Solution Platform.
Project->Properties lets you modify the properties window.
Solution Configuration (Debug, Release, Configuration  Manager)
Solution Platform -> (X86, X64) defaults to X86 (32 bit) - also
has X64 (64 bit).
A configuration is a set of rules that apply to building a project.
A solution platform is what platform we are targeting the binary to.
Android could be a platform to be targeted.

Project -> Properties
Make sure your configuration and your platform are set to the
ones you actually are targeting. If you are modifying the wrong
configuration, nothing will happen in your current configuration.

Win32 is exactly the same as X86.  It is the binary that the
compiler will output.
Configuration Type is set to Application. (.exe)
Could also be a dynamic or static linked library.

Compiler settings are under C/C++
Default cofiguration is pretty good.

Under Optimization tab if you change from Debug to Release
you should see the differences, Optimization favors speed.  In release
mode optimization is turned on.  In Debug it is turned off.  Debug
is slower than Release.

Each .cpp file in our project gets compiled.
Header files do not get compiled, they are only included into
a .cpp file.  Each .cpp file gets compiled individually.

Each .cpp file is compiled into a .obj file.  The linker
stitches the .obj files together.

The linker does the stitching, glues the .obj files together.

In Visual Studio, you can compile an individual .cpp file
by pressing CTRL+F7.  There is also a Compile button (somewhere).

Error List and Output Window are two ways to display compile errors.
Error list is deceptive, sometimes doesn't show all the errors.
Error list parses the Output Window looking for the word Error.
Can go to the location of the error by highlighting the line and selecting
Go To Location.

When you compile a file individually, no linking happens.

Right click Solution Explorer and select Open Folder In File Explorer, 
you get the File Explorer view.

.pdb is the Program Debug Database

So what happens when we have multiple C++ files?
(Added Log function)
A const char pointer is a type that can hold a string of text.

Separate code into multiple files to keep files clean and organized.
(Place Log function in a different file.)

Compiling Log.cpp and Main.cpp produces errors.
Main complains that the symbol Log doesn't exist.
Log complains that cout doesn't exist.  Need to #include iostream.
Main needs a function prototype for the Log function.
Every symbol in C++ needs some kind of declaration.
A declaration of Log in main.cpp declares that something called Log exists.
Name of the parameter doesn\'t matter.

The linker resolves all the symbols in all the .cpp files.
Linker error is produced when the linker cannot find the declarations.

Change Log to Logr in Log.cpp to generate a Linker error.
Linker error shows what the unresolved symbol is, as well as its return type and signature.
(16:34)












 
*/
#include <iostream>

// need function prototype for Log function
 void Log(const char*);

int main()
{
	Log("Ira was here!");
	
	std::cout << "Hello World!" << std::endl;
	
	std::cin.get();
}