/*
	Loops in C++

	Loops are things we can write in our code to perform certain operations
	multiple times.

	Example:  Print "Hello World" 5 times
	Another:  Keep processes running.  Game loop, while user doesn't quit.

	Same thing as conditionals.

	For loop has 3 parts, each separated by a semicolon.
	First part is variable declaration. Letter i usually used, but could be anything.
	Second part is a condition = as long as condition is true, execute the loop.
	Last part is code to be called before iteration of the next loop.

	The declaration is first thing.
	If the condition is true, execute the body of the for loop.
	Then the last part is evaluated.
	If the condition is true, execute body of loop.

	Useful for arrays.

	for loops and while loops can do the same thing.
	Use for loop for iterating over an array.
	Have access to the index at each iteration.

	Do While loop.
*/

#include <iostream>
#include "Log.h"

int main()
{
	
	
	// without a loop
	std::cout << "=========== Without a loop ===========\n";
	Log("Hello World!");
	Log("Hello World!");
	Log("Hello World!");
	Log("Hello World!");
	Log("Hello World!");

	std::cout << "=========== With a for loop ==========\n";
	for (int i = 0; i < 5; i++)
	{
		Log("Hello World");
	}

	std::cout << "========Initialize the start variable outside the loop ==========\n";
	int i = 0;
	for (; i < 5; i++)
	{
		Log("Hello World");
	}

	std::cout << "========Increment i in the body of the loop ==========\n";
	i = 0;
	for (; i < 5;)
	{
		Log("Hello World");
		i++;
	}

	std::cout << "========test a bool condition ==========\n";
	i = 0;
	bool condition = true;
	for (; condition;)
	{
		Log("Hello World");
		i++;
		condition = i < 5;
	}

	std::cout << "=======another bool condition style==========\n";
	i = 0;
	condition = true;
	for (; condition;)
	{
		Log("Hello World");
		i++;
		if (!(i < 5))
			condition = false;
	}

	// while loop (only a condition test)
	// good example is a game loop
	// don't need to change the condition after each iteration.
	std::cout << "=========== While loop ===========\n";
	i = 0;
	while (i < 5)
	{
		Log("Hello World");
		i++;
	}

	
	std::cout << "===========Do While loop =========\n";
	i = 0;
	do
	{
		// executed at least once
		Log("Hello World");
		i++;
		
	} while (i < 5);



	std::cin.get();
}
