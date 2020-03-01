/*
	Static Linking

	In Java, C#, or Python, you might be using a package manager to link libraries statically.
	In C++ everyone seems to have problems.

	TheCherno hates the idea of package managers.  He likes to have everything needed available
	without having to link to external libraries.  There should be no need to sync up with package
	managers or downloading other libraries.  Clone the repository and have the code just compile and
	run.

	TheCherno has copies of the physical binaries or code for each version of the program.
	In Visual Studio, add another project which contains the source code of the library, then
	build everything.

	This tutorial example links against binaries.  This example uses the GLFW library.
	Compiling the binaries helps with debugging, can modify the library frequently.

	GLFW.org is the library for this example.

	32 bit binaries or 64 bit binaries?  This has nothing to do with the OS of your computer.
	Choose based on the target solution, not the solution you are developing on.  If you don't do that,
	the libraries won't link.

	There are two parts to a library, usually.  These are the include files and the library files.  
	Include files have the headers, and the library files have the implementation of the library
	functions.

	In static linking, the library is included in the program's executable.
	In dynamic linking the library is a separate file from the executed, and the library is
	loaded at run time. An example is  the LoadLibrary function in the Windows API, which
	loads the library at run time.

	TheCherno likes static linking whenever possible because all the code is in one place.
	Static linking is also faster than dynamic linking.

	These are symbol declarations because they could be variables.

	You need to tell the linker where the library files are.

	8:17


*/