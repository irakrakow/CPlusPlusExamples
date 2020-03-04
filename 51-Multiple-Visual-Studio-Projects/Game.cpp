/*
	Multiple Visual Studio Projects in C++ (Static Linking)

	Objective: Create multiple projects in Visual Studio.
	Also, how to create a library that can be used in other Visual Studio projects.

	You are creating a reusable module or library.  It also lets you link languages.
	Very useful in complex projects.
	
	We will create one static library and link from an executable.

	Geme is the executable.
	Engine is the static library that the executable references.
	Set in Properties -> General -> Configuration Type.

	How to reference Engine.h in Application.cpp?

	Continue at: 6:37
	Look at "Compiler Include Paths"
	Set reference to the folder containing Engine.h.
	Use {SolutionDir} macro.
	Game depends on Engine.

	If there  was a change in Engine and you recompile Game, 
	Engine is compiled first, then Game is recompiled.

	When you link statically there is no external file dependency.
*/