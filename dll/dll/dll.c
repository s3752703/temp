#include "pch.h"
#include <stdio.h>
#include <stdarg.h>
#include "dll.h"

DLL_API void printnow(char* str, ...)
{
	va_list arg;
	int done;
	va_start(arg, str);
	done = vfprintf(stdout, str, arg);
	va_end(arg);
}



