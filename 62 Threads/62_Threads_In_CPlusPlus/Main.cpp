/*
	Threads in C++

	How to make code run in parallel.
	main() is one thread.  One instruction at a time.

	Used for complex programs to move off work to different threads of exeution.

	When you pass a thread object to the constructor 
	called and the thread is started.

	thread.join waits until the worker thread finishes.

*/
#include <iostream>
#include <thread>

static bool s_Finished = false;

void DoWork()
{
	using namespace std::literals::chrono_literals;
	
	std::cout << "Started thread id=" << std::this_thread::get_id() << std::endl;

	while (!s_Finished)
	{
		std::cout << "Working...\n" << std::endl;
		// gives commands to the current thread.
		std::this_thread::sleep_for(10s);
	}
}

int main()
{
	// Start the DoWork function on the worker thread
	std::thread worker(DoWork);

	//make the main thread wait until DoWork finishes
	//block current thread until DoWork finishes.
	
	std::cin.get();
	//force DoWork to complete
	s_Finished = true;
	// since s_Finished is true, worker thread will exit the while loop and finish.

	worker.join();
	std::cout << "worker thread has completed...\n";
	std::cout << "Finished." << std::endl;
	std::cout << "Finished thread id=" << std::this_thread::get_id() << std::endl;

	//this will not run until DoWork  finishes
	std::cin.get();
}