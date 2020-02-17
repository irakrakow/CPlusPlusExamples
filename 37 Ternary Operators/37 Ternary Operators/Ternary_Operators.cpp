/*
  Ternary Operators

  Ternary operator is another name for the ? and  :

  It's "syntactic sugar" for if statements
  It's a shorthand for the if statement

  Is this easier to read?



*/

#include <iostream>
#include <string>

static int s_Level = 11;
static int s_Speed = 2;

int main()
{
	// using an if statement
	// conditional assignment - can be done on one line
	if (s_Level > 5)
		s_Speed = 10;
	else
		s_Speed = 5;
	std::cout << "s_Speed with if statement:  " << s_Speed << std::endl;

	// alternative - do on one line
	s_Level > 5 ? 10 : 5;
	std::cout << "s_Speed with ternary operator:  " << s_Speed << std::endl;

	std::cout << "------Another example------------------" << std::endl;	
	// ternary operator 
	std::string rank = s_Level > 10 ? "Master" : "Beginner";
	std::cout << "rank with ternary operator: " << rank << std::endl;

	// assigning rank with if else

	// creates empty string object
	std::string otherRank;
	// research Return Value Optimization
	// gets overridden in if statement - creates another object with the rank
	if (s_Level > 10)
		otherRank = "Master";
	else
		otherRank = "Beginner";
	std::cout << "rank with if else construction: " << rank << std::endl;

	// ternary operators can be nested
	std::cout << "--------------Nested Ternary Operators-------------------" << std::endl;
	s_Speed = s_Level > 5 ? s_Level > 10 ? 15 : 10 : 5;
	// could use an array of return values with a user defined lookup
	std::cout << "Nested Ternary Operator rank: " << rank << std::endl;
	std::cout << "Speed: " << s_Speed << std::endl;
	// code with if statement



	std::cin.get();
}