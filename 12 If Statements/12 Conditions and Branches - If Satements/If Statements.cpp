/*
If Statements (Conditions and Branches)

Conditionals are If statements
Goes deeper than traditional if statements in tutorials

Evaluate a certain condition and then does something specific if the condition is true.
Two things - evaluation of condition, and then what to do.

There is a little bit of overhead.
== is the Equality Operator, testing to see if the variables are the same.
== is overloaded in the C standard library.

Go To Disassembly works in debug mode when a breakpoint is active.
Right click on the line where the breakpoint is.

For a bool, if the value is 0 the variable is false.
Any other value makes bool = true.

Constant folding lets the compiler evaluate conditionals if it can determine the values to compare.
Can use an if statement with pointers. 

The else statement is cleverly hidden syntax.
else...if is really else followed by an if.

Two parts to programming -- mathematical programming and logical programming
If you do the mathematical equivalent of the logical step, you get faster (but more unreadable) code.

*/
#include <iostream>
#include "Log.h"

void Log(const char* message);

int main()
{
	// this works
	const char* ptr = "Hello";
	if (ptr)
	{
		std::cout << ptr << std::endl;
	}
	
	//nothing will print
	ptr = nullptr;
	if (ptr)
	{
		// does not print because ptr is false
		std::cout << ptr << std::endl;
	}
	else
	{
		// however this prints because ptr is null
		std::cout << "Ptr is null " << std::endl;
	}

	// this also works
	int x = 5;
	bool comparisonResult = x == 5;
	
	// can put the whole if statement on one line but cannot set a breakpoint to see what's happening.
	if (comparisonResult)
		Log("Hello world!");
	std::cin.get();


}