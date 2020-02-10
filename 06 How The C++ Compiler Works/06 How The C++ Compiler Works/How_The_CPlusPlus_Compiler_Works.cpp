/*
How the C++ Compiler Works

We write our C++ code as text.
The text is transformed into an application that can be run.

The compiler transforms the text into an intermediate form, called an object file (.obj format)
Each .cpp file is compiled into an object file.

The linker will create a binary out of the object files.

First, any preprocessor statements get evaluated before the compiler does its job.
Then the tokenizing and parsing phase begins.
This results in an abstract syntax tree created - a representation of the code as an abstract syntax tree.

The compiler at the end of the day creates code both for instructions and data.
The code is the actual machine code that the compiler will execute.

Every .cpp file has an object file created for it by the compiler.
The .cpp files are known as translation units.

C++ doesn't care about files.  Unlike Java, where your class name is tied to the file name.
Also in Java, your folder hierarchy has to be tied to your package.
In C++ a file is a way to feed the compiler with source code.

If the file has a .cpp extension, the compiler assumes the file has C++ source.
If the file has a .c extension, the compiler assumes that the file contains C source.
If the file has a .py extension, the compiler assumes that the file contains Python source.
If the file has a .h extension, the compiler assumes that the file is a header file.
These are default conventions.  You can change them.

Every c++ file is compiled as a translation unit.
You can #include other .cpp files in a .cpp file.  Compiling in this manner just produces
one object file, and thus one translation unit.

First compilatoin stage:  preprocessing
The compiler goes through the preprocessing statements (#include, #define, #if, #ifdef) and
evaluates them.
There are also #pragma statements which tell the compiler how to preprocess

#include is really simple.
Specify which file to include.  The preprocessor opens that file, reads its contents
into the source, and pastes it at the location in the .cpp file where you wrote the
#include statement.

Set "Preprocess to a file" to see how Endbrace.h is #included.
Preprocess to a file does not produce an .obj file.

The #if preprocessor statement lets us include or exclude code based on a condition.

The .obj file (open in text editor) produces machine code, not readible.

(11:58)


*/

#include <iostream>
#include "Log.h"

void Log(const char* message);

int main()
{
	Log("Hello World!");

	std::cout << std::cin.get();
}