#include <iostream>
#include <string>

class Entity
{
public:
	int x;
public:
	void Print() const { std::cout << "Hello\n" << std::endl; }

};

class ScopedPtr
{
private:
	Entity* m_Obj;
public:
	ScopedPtr(Entity* entity)
		: m_Obj(entity)
	{}

	~ScopedPtr()
		{
			delete m_Obj;
		}

	Entity* operator->()
	{
		return m_Obj;
	}

	struct Vector3
	{
		float x, y, z;
	};
	

};

int main() {

	Vector3 vec;
	vec->x = 5;
	int offset;
	offset = &((vec*)0)->x;

	
	ScopedPtr entity1 = new Entity();
	entity1->Print();

	// no issues
	Entity e;
	e.Print();

	// using a pointer
	Entity* ptr = &e;
	ptr->Print();  // uses arrow operator

	// using Entity reference works
	Entity& entity = *ptr;
	entity.Print();

	// this also works but is clunky
	(*ptr).Print();
	
	//arrow operator works as well
	ptr->Print();

	ptr->x = 2;
	std::cout << ptr->x << std::endl;

	// overload the -> operator



	std::cin.get();
}