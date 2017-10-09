#include <iostream>
#include <cstdlib> // содержит srand() и rand()
#include <Windows.h>
#include <Intrin.h>

using namespace std;

double SumOfArrayQPC() {
	LARGE_INTEGER liStart, liFinish;
	int sum = 0;
	int randomDigits[1000] = {};

	for (int i = 0; i < 1000; i++)
	{
		randomDigits[i] = i; // запись случайного числа, которое вернет rand()
	}
	QueryPerformanceCounter(&liStart);
	LARGE_INTEGER liFreq;
	QueryPerformanceFrequency(&liFreq);
	for (int i = 0; i < 1000; i++) {
		sum += randomDigits[i];
	}
	QueryPerformanceCounter(&liFinish);
	return (double)(liFinish.QuadPart - liStart.QuadPart) / liFreq.QuadPart;
}

void SumOfArrayRDTSK() {
	int liStart, liFinish;
	int sum = 0;
	int randomDigits[1000] = {};

	for (int i = 0; i < 1000; i++)
	{
		randomDigits[i] = i;
	}
	liStart = __rdtsc();
	for (int i = 0; i < 1000; i++) {
		sum += randomDigits[i];
	}
	liFinish = __rdtsc();
	printf("%d", liFinish - liStart);
}

