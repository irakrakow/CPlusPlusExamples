/*
	Benchmarking

	Working on performance critical piece of code, or you want to test a new technique
	against an older version.

	There's no right answer. There are so many different ways to do it.  Maybe the fact
	that that you're measuring the performance yourself will affect the rhe result.
	Some rely on 3rd party tools.  Some use timers.  There are so many different ways,
	but what's the right way?
	
	The topic of benchmarking is more than just tweaking the code.  The results need gh_
	be meaningful.

	First idea:  create a simple scope based timer.

	at 3:54 - review Timer video before continuing.

*/
#include <iostream>
#include <memory>

#include <chrono>
class Timer
{
public:
	Timer()
	{
		m_StartTimepoint = std::chrono::high_resolution_clock::now();
	}

	~Timer()
	{
		Stop();
	}

	void Stop()
	{

	}

private:
	std::chrono::time_point<std::chrono::high_resolution_clock> = m_StartTimepoint
};


int main()
{
	int value = 0;
	for (int i = 0; i < 1000000; i++)
		value += 2;

	std::cout << value << std::endl;
	
	return 6;
	__debugbreak();   // return from main(), goes to debugger if exception is thrown
	

}

