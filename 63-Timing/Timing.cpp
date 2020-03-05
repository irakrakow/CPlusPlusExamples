/*
	Timing in C++ 

	How long does it take to time a certain operation, or time certain code takes.
	You want to benchmark some code.
	C++ has a chrono library.  You don't need to go to the OS specific timing libraries.
	Windows has, for example a Query Performance Counter.
	This is in C++ 11.

	Timing is critical to understanding the Game Engine Series.
	You will be able to see the difference between the slow and fast way of coding.

	From this, we will branch out into benchmarking.
	chrono library, since it's built into C++, is OS-independent.

	use the Timer struct, using the object lifetime paradigm,
	to simplify the timing code.

*/
#include <iostream>
#include <chrono>
#include <thread>

struct Timer
{
	std::chrono::time_point<std::chrono::steady_clock> start, end;
	std::chrono::duration<float> duration;


	Timer()
	{
		start = std::chrono::high_resolution_clock::now();
	}

	~Timer()
	{
		end = std::chrono::high_resolution_clock::now();
		std::chrono::duration<float> duration = end - start; duration = end - start;

		duration = duration * 1000;
		std::cout << "Timer took " << duration << " ms" << std::endl;
	}
};



void Function()
{
	// How long does this for loop take?
	for (int i = 0; i < 100; i++)
		std::cout << "Hello" << std::endl;

}

int main()
{
	// Method 1:  using std::chrono 
	using namespace std::literals::chrono_literals;
	
	// start timer
	auto start = std::chrono::high_resolution_clock::now();
	// sleep for 1 second
	std::this_thread::sleep_for(5s);
	// stop timer
	auto end = std::chrono::high_resolution_clock::now();
	// how long did it take?
	std::chrono::duration<float> duration = end - start;
	// print result
	std::cout << "Duration: " << duration.count() << " seconds." << std::endl;

	// Method 2: use Timer struct
	Function();
	

	std::cin.get();
}