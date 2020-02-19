/*
	Control Flow Statements (Continue, Break, and Return)

	This is a continuation of the discussion on loops, and goes hand in hand with that.
	Control flow statements give more control over how the loops actually run.

	Three control flow statements
	1)  Continue:  go to the next iteration of the loop
	2)  Break: get out of the loop
	3)  Return:  get out of the function.  Need to return a value if the function does not return void.

	Control flow statements apply to all loops (for, while, do)

	Return can be written anywhere.

	These are the building blocks of writing an application.

*/
#include <iostream>
void Log(const char* message)
{
	std::cout << message << std::endl;
}

int main()
{
	// Basic for loop
	for (int i = 0; i < 5; i++)
	{
		Log("Hello World");
	}

	// continue breaks out of this iteration of the for loop, goes to 
	// next iteration.

	std::cout << "==================Continue=========\n";
	for (int i = 0; i < 5; i++)
	{
		Log("Hello World");
		continue;  // does not impact behavior, just goes to next iteration
	}

	std::cout << "==================Continue with i % 2 == 0======\n";
	for (int i = 0; i < 5; i++)
	{
		if (i % 2 == 0)
			continue;  // prints 1 and 3
		Log("Hello World");
		std::cout << i << std::endl;
	}

	std::cout << "==================Continue with i > 2 ===============\n";
	for (int i = 0; i < 5; i++)
	{
		if (i > 2)
			continue;  // prints 0, 1, and 2
		Log("Hello World");
		std::cout << i << std::endl;
	}

	std::cout << "==================Break with i > 2 ===============\n";
	for (int i = 0; i < 5; i++)
	{
		if (i > 2)
			break;  // prints 0, 1, and 2, but exits loop when i > 2
		Log("Hello World");
		std::cout << i << std::endl;
	}

	std::cout << "==================Break with i % 2 == 0  =========\n";
	for (int i = 0; i < 5; i++)
	{
		if (i % 2 == 0)
			break;  // breaks out of for loop, does not execute Log 
		Log("Hello World");
		std::cout << i << std::endl;
	}

	std::cout << "==================return with i % 2 == 0  =========\n";
	for (int i = 0; i < 5; i++)
	{
		//if (i % 2 == 0)
		//	return 0;  // exits main() and ends program, no std::cin.get() 
		
		Log("Hello World");
		std::cout << i << std::endl;
	}
	std::cin.get();
}