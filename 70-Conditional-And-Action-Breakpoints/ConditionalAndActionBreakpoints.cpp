/*
	Conditional and Action Breakpoints

	TheCherno has 100,000 subscribers (August 12, 2018).

	Conditional Breakpoint - trigger the breakpoint only under certain conditions.
	Action Breakpoint - take some kind of action when the breakpoint is hit

	One action breakpoint lets you continue while printing what you want
	For example, record the position of the mouse after a MouseMove event, but
	keep the program running.

	Another action:  pause the program to inspect memory or something.

	Everything you can do with these breakpoints you can do in code. For example,
	an if statement where the condition is tested and if  it's true code
	a debug break, like an assert macro.

	A good use case is that the program is in a certain state and we want to
	inspect some aspect of the program, such as variables, at that point.  Maybe
	make the change there instead of terminating the program, recompiling it,
	and reproducing the exact situation, which slows down our workflow.

	theCherno's example is logging the mouse position in a game when the 
	MouseMove event is triggered.  Demonstrate conditional breakpoint.

	We can add more information to the console without stopping the program.
	Look at "show output from debug" to see the messages from the conditional breakpoint.0

	Breakpoints slow down your program a lot, but since this is debug mode that is OK.

*/
#include <iostream>

int main()
{
	for (int i = 1; i < 200; i++)
	{
		std::cout << i << std::endl;
	}
	
	std::cin.get();
}