#include <iostream>
#include <cstdlib> 
#include "omp.h" 
#include <Windows.h>
#include <Intrin.h>

double ArraySumFor1() {
	int sum = 0;
	int randomDigits[10000] = {};
	double Start, Finish;
	for (int i = 0; i < 10000; i++)
	{
		randomDigits[i] = i; // запись случайного числа, которое вернет rand()
	}
	Start = omp_get_wtime();
	for (int i = 0; i < 10000; i++) {
		sum += randomDigits[i];
	}
	Finish = omp_get_wtime();
	return Finish - Start;
}

double ArraySumFor2() {
	int sum = 0;
	int randomDigits[20000] = {};
	double Start, Finish;
	for (int i = 0; i < 20000; i++)
	{
		randomDigits[i] = i; // запись случайного числа, которое вернет rand()
	}
	Start = omp_get_wtime();
	for (int i = 0; i < 20000; i++) {
		sum += randomDigits[i];
	}
	Finish = omp_get_wtime();
	return Finish - Start;
}

double ArraySumFor3() {
	int sum = 0;
	int randomDigits[30000] = {};
	double Start, Finish;
	for (int i = 0; i < 30000; i++)
	{
		randomDigits[i] = i; // запись случайного числа, которое вернет rand()
	}
	Start = omp_get_wtime();
	for (int i = 0; i < 30000; i++) {
		sum += randomDigits[i];
	}
	Finish = omp_get_wtime();
	return Finish - Start;
}

double ArraySumForRelative1() {
	int sum = 0;
	int Count = 0;
	int randomDigits[10000] = {};
	double Start, Finish;
	for (int i = 0; i < 10000; i++)
	{
		randomDigits[i] = i; 
	}
	Start = GetTickCount();
	do
	{
		Finish = GetTickCount();
		Count++;
	} while (Finish - Start < 2000);
	return Count;
}

double ArraySumForRelative2() {
	int sum = 0;
	int Count = 0;
	int randomDigits[20000] = {};
	double Start, Finish;
	for (int i = 0; i < 20000; i++)
	{
		randomDigits[i] = i;
	}
	Start = GetTickCount();
	do
	{
		Finish = GetTickCount();
		Count++;
	} while (Finish - Start < 2000);
	return Count;
}

double ArraySumForRelative3() {
	int sum = 0;
	int Count = 0;
	int randomDigits[30000] = {};
	double Start, Finish;
	for (int i = 0; i < 30000; i++)
	{
		randomDigits[i] = i;
	}
	Start = GetTickCount();
	do
	{
		Finish = GetTickCount();
		Count++;
	} while (Finish - Start < 2000);
	return Count;
}