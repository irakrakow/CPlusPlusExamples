/*
	Real World Example - a logging class
	Used for debugging purposes
	Only log certain  messages to console.
	Console is guaranteed to always work.
	Console is built into OS.
	Log class is a great example.
	It can be as simple or complicated as you want.
	Could be 10 lines of code or 10,000 lines of code.

	Three levels (WARNING,  ERROR, TRACE)
	Filter what actually gets sent.



*/
#include <iostream>
using namespace std;



class Log
{
public:
	enum Level
	{
		levelError = 0, levelWarning, levelInfo	
	};

	//const int LogLevelError = 0;
	//const int LogLevelWarning = 1;
	//const int LogLevelInfo = 2;

private:
	Level m_LogLevel= levelInfo;
public:
	void SetLevel(Level level)
	{
		m_LogLevel = level;
	};

	void Warn(const char* message)
	{
		
		if (m_LogLevel >= levelWarning)
		{
			cout << "[WARNING]: " << message << endl;
		}
	};

	void Error(const char* message)
	{
		if (m_LogLevel >= levelError)
		{
			cout << "[ERROR]: " << message << endl;
		}
	};

	void Info(const char* message)
	{
		if (m_LogLevel >= levelInfo)
		{
			cout << "[INFO]: " << message << endl;
		}
	}
};


int main()
{
	Log log;
	log.SetLevel(Log::levelError);
	log.Warn("Hello ");
	log.Error("Hello ");
	log.Info("Hello ");
	std::cin.get();

};