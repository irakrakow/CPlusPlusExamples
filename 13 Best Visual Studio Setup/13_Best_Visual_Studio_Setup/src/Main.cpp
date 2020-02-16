/*
The Best Visual Studio Setup

TheCherno's settings explained, what he has grown into over the years.

Start page, create brand new project and solution.
He likes to store ptojects under C:\Dev, so that it's portable.
Create Directory For Solution checkbox will cause a new directory for the project
to be created.

Right Click on Project (in Solution Explorer) and select Cpen Folder In
File Explorer shows the folder structure on disk.

Default solution is the same name as the project.  Very rare that the solution
name and project name are the same, so most professional programmers customize this.

.vcxproj files and .filters files are also created.
.sln (Solution file) is a text file, as are the .vcxproj and .filters.

In Solution Explorer,there are filters, which look like folders but really are not.
Right click on Add from Solution Explorer, you see "New Filter", not "New Folder"
choice.  When you add a filter, nothing changes on disk.  However, if you
add a .cpp file, that file is actually created on disk.

Filters are virtual folders, useful for organizing your source code.

Show All Files button on the Project Toolbar - click to show files on disk.
TheCherno uses Show All Files mostly.

Could delete all filters.

Put binaries in a separate folder for each configuration.
Solution can have multiple projects.


*/
#include <iostream>

int main()
{
	std::cout << "Hello World!\n";
	std::cin.get();
}