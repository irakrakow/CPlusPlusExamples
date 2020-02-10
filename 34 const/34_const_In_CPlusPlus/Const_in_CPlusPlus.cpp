#include <iostream>
#include <string>

class Entity
{
private:
	int m_X, m_Y;
public:
	int GetX()
	{
		//m_X = 2;
		return m_X;
	}

	void SetX(int x)
	{
		m_X = x;
	}


};


int main()
{
	int MAX_AGE = 90;

	int*  a = new int;
//	const int* a = new int;
	*a = 2;
	a = (int*)&MAX_AGE;
	a = nullptr;

	std::cout << *a << std::endl;

	std::cin.get();
}