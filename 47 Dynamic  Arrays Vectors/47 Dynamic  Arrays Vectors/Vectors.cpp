/*
  Vectors (Dynamic Arrays)

  Standard vector class in C++ standard template library.
  The standard template library is filled with container types, types that contain
  other types.  The STL is a template library because it is templated - can use
  any types.  You decide what data type the container contains.

  These are data structures.

  The vector class is in the std namespace.  The name is weird.  Should be called
  something like "arraylist" or "set".  It is not a mathematical vector.  
  It's a dynamic array.

  Vectors can resize.  You create the array and put elements, and every time you
  add an element, the array grows.  We will rewrite many of the data structures which
  exist in C++.  The standard template library templates are not optimized for speed.
  Studios such as Electronic Arts create their own template library instead.

  When you create an instance of the Vector class, the size might be preallocated to,
  say, something like 10 elements.  When you exceed the initial limit, the program creates
  a new Vector, copies the elements in the old class to the new class, and deletes the
  old instance.

  This is for beginners.  







*/
#include <iostream>
#include <string>

#include <vector>  //vector lives in std C++ library

struct Vertex
{
	float x, y, z;
};

std::iostream& operator<<(std::iostream& stream, const Vertex& vertex)
{
	stream << vertex.x << ", " << vertex.y << ", " << vertex.z << std::endl;
	return stream;
}

// pass by reference to avoid copying the array
void Function(const std::vector<Vertex>& vertices)
{

}

int main()
{
	
	
	Vertex verticesStandard[5];   //limits the size.  Cannot grow.
	Vertex* verticesHeap = new Vertex[5];  //allocated on heap, but size limit still exists.
	Vertex* verticesBig = new Vertex[50000]; //wastes memory but allows many vertices

	std::vector<Vertex> vertices;   // creates a dynamic array variable
	// can create templates with primitive types, unlike Java.
	std::vector<int> intVector;  //vector of ints, for example.

	//C++ is not storing pointers, but rather the values themselves, inline.
	// storing variables inline is optimal for, say, iterating over them
	// down side is if you need to resize, there's a lot of copying going on, so slower.
	// copying a vector of strings is especially slow.
	// With pointers, the actual memory stays intact.
	// so just needs to copy the memory addresses to the new vector.

	// adding vertices.  In other languages, method is called Add or similar
	vertices.push_back({ 1, 2, 3 });
	vertices.push_back({ 4, 5, 6 });

	Function(vertices);

	// iterate and print
	// does not work for me
	/*for (int i = 0; i < vertices.size(); i++)
		std::cout << vertices[i] << std::endl;

	for (Vertex v : vertices)
		std::cout << v << std::endl;*/

	vertices.erase(vertices.begin() + 1);  // erases 2nd element

	// erase the vertices.
	vertices.clear();

	std::cin.get();
}