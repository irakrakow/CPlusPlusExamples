//#pragma once
//pragma once means "only include this file once"
//This prevents including a header file more than once in a single translation unit
//Called a "header guard".

// alternative: use #ifdef, #define, #endif to include declarations in header file only once.
#ifdef _LOG_H
#define _LOG_H
void Log(const char* message);
void InitLog();

struct Player {};
#endif
