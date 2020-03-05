/*
	Optimizing std::vector class

	How to make the vector objects run faster.
	C++ plays nicely with optimization.
	You need to know your environment, knowing how things work.

	Scratch the surface.

	Vector class procedure is to create the vector and then push_back the elements.
	If the capacity of the vector is exceeded, C++ needs to allocate new memory, copy
	the elements of the old vector into the new vector, and delete the old vector.

	Reallocation is a slow operation.  In this video, we are storing a vector of objects,
	not a vector of pointers.

	We need to know when reallocation actually happens.
	See code below.
	There are 6 copies made originally for 3 objects.
	When we construct Vertex it's first constructed in the main() stack frame.
	Then we need to copy the constructed data into the Vertex class.

	If we construct the vector element in the memory that has been
	allocated, we would not need to copy it.

	capacity starts off at 2.  So the 3rd push_back will cause a copy.

	If we know we are going to push_back 3 Vertex objects, we should
	change the capacity to 3.

*/
#include <iostream>
#include <string>
#include <vector>

struct Vertex
{
	float x, y, z;

	Vertex(float x, float y, float z)
		:x(x), y(y), z(z)
	{

	}

	// add copy constructor to determine when copying happens
	Vertex(const Vertex& vertex)
		:x(vertex.x), y(vertex.y), z(vertex.z)
	{
		std::cout << "Copied! " << std::endl;
	}
};

int main()
{
	std::vector<Vertex> vertices;
	vertices.reserve(3);   // declares we will push_back 3 elements
	// we are still copying the object twice
	/*vertices.push_back(Vertex( 1,2,3 ));
	vertices.push_back(Vertex( 4,5,6 ));
	vertices.push_back(Vertex(7, 8, 9));*/

	// this tells C++ to create the object inline, in vertices memory
	vertices.emplace_back( 1,2,3 );
	vertices.emplace_back( 4,5,6 );
	vertices.emplace_back(7, 8, 9);

	// no copies!!!
	std::cin.get();
}