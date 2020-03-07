/*
	Safety in Modern C++ and How to Teach It

	This video talks about the debate between modern C++ and safety.
	This has been talked about for a long time.

	What's the correct way to code in  C++ in the modern day.
	Maybe you shouldn't teach raw pointers, just teach the new way. 
	But the new way has performance overhead.

	Develop awareness of where you should be concerned and what the right way is.
	Go to thecherno.com/discord

	There are >3.5K members on that discord.

	Safe programming (reduce crashes, memory leaks, access violations, etc.)
	C++ 11 introduced smart pointers because of memory leaks.
	This can be summarized by the question of allocating memory on the heap.  Need to deallocate intelligently.

	There are all these constructs of hopefully reduce human error, to make programmers lives easier
	and more robust.  When you forget to do certain things, you are still OK.

	Heap allocation process is that memory is allocated (get a pointer  to a block of memory if successful).
	You get a pointer to the block if the allocation is successful.

	what happens if I forget to free my memory (memory leak, which might be OK  but could also result in
	a program crash (you run out of memory, or memory is corrupted).  
	
	There's also the problem of ownership.  If I have a raw function and  pass it from function to function
	or from class to class, who is responsible for cleaning the memory up?  This is not possible unless
	there is a memory cleanup function which makes things more complex.

	Or you could say "pay more attention to my code when I am programming"?  This is a "fake" solution.

	Really, we are automating the deletion of memory.  This can be very important.  Smart pointers are
	really good.  Saying "raw pointers only" is stupid.  You may choose to write your own, like a version
	of std_unique, or like std_shared (reference counting).  You could introduce concepts like weak
	pointers.  You might squeeze out platform-specific optimizations.

	If theCherno writes a throwaway program, he most likely would use raw pointers.  There's no need
	for the overhead and maintenance trouble of smart pointers.  Raw pointers are easier to write and
	easier to read.  This applies for a simple sandbox application with less than 100 lines of code.
	Raw pointers would be easier to use, just use the *. 

	The "only raw pointers" rule is too pedantic. 

	Smart pointers are not thread safe.  TheCherno believes that all C++ programmers need to know what
	a raw pointer is, and how to manage memory at the basic level.   Smart pointers are just a wrapper
	around raw pointers, so if you don't understand how raw pointers work you won't understand how
	to free memory intelligently.  TheCherno wants you to understand how things work.

	All of this is theCherno's opinion.  In the real world, what you use will influence your code
	quality a lot.

	Find other C++ resources if you want.



*/