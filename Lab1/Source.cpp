#include <stdio.h>
#include <time.h>
#include <Windows.h>
#include "AbsoluteAndRelativeTimes.h"
#include "GetMaxDate.h"
#include "Matrix.h"
#include "MatrixMultiplication.h"

int main()
{
	printf("Last date when used 32 bit func time() %s", asctime(GetMaxDateInt32()));
	printf("T2/T1 = %f\n", ArraySumFor2() / ArraySumFor1());
	printf("T3/T1 = %f\n", ArraySumForRelative2() / ArraySumForRelative1());
	printf("T2'/T1' = %f\n", ArraySumFor3() / ArraySumFor1());
	printf("T3'/T1' = %f\n", ArraySumForRelative3() / ArraySumForRelative1());
	int secondArray[][2] = { { 1,3 }, { 2,6 } };
	Matrix matrix2(secondArray);
	int firstArray[][2] = { { 11,2 }, { 3,3 } };
	Matrix matrix1(firstArray);
	int **arr3 = 0;
	MatrixMultiplication(arr3, 2, matrix1, matrix2);
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d ", arr3[i][j]);
		}
		printf("\n");
	}
}
