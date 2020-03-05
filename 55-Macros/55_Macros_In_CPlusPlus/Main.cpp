/*
	C++ Macros

	Use preprocessor to automate the code.
	#DEFINE Preprocessor pass
	#IF, #IFDEF, #IFNDEF, etc.

	Text editor, controls what is fed  into the compiler.
	Macro replaces text (find and replace)
	Could have parameters, arguments, variables.

	Unlike templates, which are evaluated during compilation,
	with macros you don't get to the compile time.

	Use for #define is to control when to log messages.
	The #ifdef block removes log messages in release mode.
*/
 
#include <iostream>
using namespace std;

//preprocessor replaces WAIT with std::cin.get()
//DON'T DO THIS!!
#define WAIT std::cin.get()
#define OPEN_CURLY {

#define PR_DEBUG 1

#if PR_DEBUG == 1
//#ifdef PR_DEBUG
#define LOG(x) std::cout << x << endl;
#else
#define LOG(x)
#endif

int main()


OPEN_CURLY
	LOG("Hello");
	WAIT;
}
