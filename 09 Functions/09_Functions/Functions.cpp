#include <iostream>

int Multiply(int a, int b)
{
	return a * b;
}

void MultiplyAndLog(int a, int b)
{

	std::cout << Multiply(a,b) << std::endl;
}

int main()
{
	MultiplyAndLog(9, 4);
	MultiplyAndLog(90, 455);
	MultiplyAndLog(8, -2);

	std::cin.get();
}