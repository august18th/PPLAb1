#include <stdio.h>
#include <Windows.h>

#define FILETIMETOUINT64(ft) \
((((unsigned __int64)ft.dwHighDateTime) << 32) | (ft.dwLowDateTime))


int GetTimeAccuracyForGTC() {
	DWORD Start = GetTickCount();
	DWORD Finish;
	do
	{
		Finish = GetTickCount();
	} while (Start == Finish);

	return Finish - Start;
}

int GetTimeAccuracyForGSTAFT() {
	FILETIME ft, ft1;
	GetSystemTimeAsFileTime(&ft);
	while (1) {

		GetSystemTimeAsFileTime(&ft1);
		if (ft1.dwLowDateTime != ft.dwLowDateTime) break;

	}
	return FILETIMETOUINT64(ft1) - FILETIMETOUINT64(ft);
}