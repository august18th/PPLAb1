#include <stdio.h>
#include <time.h>

tm * GetMaxDateInt32() 
{
	time_t rawtime = (time_t)0x7FFFFFFF;
	struct tm *tminfo;

	tminfo = localtime(&rawtime);
	return tminfo;
}