/*
	Precompiled headers in C++

	Precompiled headers are not required to be used.  They are more useful ro large projects.
	They give you the opportunity to grab a bunch of header files which are assembled into a format where
	they don't have to be parsed every time a .cpp file uses them.

	An example:  standard template library (std::cout, std::vector, and so on) need to be recompiled.
	Might be 100K lines of code, before you get into the main() file code.  Any time you make a change  to the
	C++ file, the whole thing needs to be recompiled.  Using precompiled headers can greatly reduce compile times.
	Each translation unit (.cpp file) needs to be recompiled if std::vector changes.

	Precompiled header files takes a bunch of code and stores it in a binary format that is way faster.
	You can reduce compile times from, say, 1 minute, to 8 seconds if you use precompiled headers.

	What not to do with precompiled headers. Why not put every header inside one precompiled header?  Doesn't work
	if the files inside the .pch file change?  Then the entire pch needs to be rebuilt.  That could result in
	slower compilation times.  If you have a library that does not change, then include it in a pch.  This makes
	the files easier to use, saving the time of #include in each cpp file.

	It's used for external dependencies (like stl, or Windows API - windows.h).  That's usually more code than
	your application or project.  However, the down side is the pch can actually hide what's being used.  What
	libraries are actually needed, since the header files are not separately included?  Stuff that should be
	included are strings, vectors, cout, that are just there will be used as is.

	370,000 lines of code in pch.h (set PreProcess to a File in Project Preferences, and look at .i file)

	To create a precompiled header, add a .cpp file which just includes pch.h.
	Then in pch.cpp, under properties - precompiled headers - say you want to create a precompiled header and
	specify the name (like pch.h).

	At 14:30.  Restart from there to compare compile times for precompiled headers vs. no precompiled headers.



*/
#include <iostream>
#include "pch.h"

int main()
{

	std::cout << "Hello World" << std::endl;
}
