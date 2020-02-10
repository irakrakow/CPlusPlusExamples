#include <iostream>
#include "Log.h"
using namespace std;

int main(){

	int a = 8;
	cout << a << endl;
	const char* string = "Hello\n";

	for (int i = 0; i < 5; i++)
		cout << i << endl;



	Log(string);
	cin.get();
	return 0;

}