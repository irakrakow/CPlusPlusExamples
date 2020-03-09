#include <iostream>

// Log is defined but is not declared.
void Log(const char* message)
{
	std::cout << message << std::endl;
}