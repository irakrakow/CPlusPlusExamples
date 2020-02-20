/*
	Copying and Copy Constructors

	Copying refers to copying data.
	Unnecessary copying is bad because it wastes time.
	We need to avoid unnecessary copying.

	References cannot be copied because they refer to themselves.


*/
#include <iostream>
#include <string>

class String
{
private:
	char* m_Buffer;  
	unsigned int m_Size;
public:
	String(const char* string)
	{
		// get lengnth of string (C function - assume string is null terminated
		m_Size = strlen(string);
		m_Buffer = new char[m_Size+1]; //assumes null terminated, otherwise add 1 to m_Size
		// could copy one character at a time 
		for (int i = 0; i < m_Size+1; i++)
			m_Buffer[i] = string[i];
		// or you could use memcpy function
		memcpy(m_Buffer, string, m_Size);
		// can also add null termination character manually
		m_Buffer[m_Size + 1] = 0;
	}

	// fix memory leak - need to delete buffer.  Could be automated with smart pointer.
	~String()
	{
		delete[] m_Buffer;
	}

	friend std::ostream& operator<<(std::ostream& stream, const String& string);
};


std::ostream& operator<<(std::ostream& stream, const String& string)
{
	stream << string.m_Buffer;
	return stream;
}


struct Vector2
{
	float x, y;
};

int main()
{
	// allocated on the stack
	int a = 2;
	int b = a; // creates a copy of a.  Separate memory addresses.
	// if you change b, a is unchanged.
	b = 3;  // a is unchanged.

	//works same with structs
	Vector2 c = { 2, 3 };
	Vector2 e = { 4, 5};  // two variables
	e.x = 5;  // c is unaffeced

	std::cout << "c.y: " << c.y << std::endl;
	std::cout << "e.y: " << e.y << std::endl;

	// heap allocation is different - uses pointers
	// two pointers point to the same object (f)
	Vector2* f = new Vector2();
	f->x = 5;
	f->y = 6;
	Vector2* g = f;
	g++;  // increments memory address, not value at that address

	String string = "Cherno\0";
	std::cout << string; 


	std::cin.get();
}
