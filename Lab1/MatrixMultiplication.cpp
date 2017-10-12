#include "Matrix.h"
#include <vector>

void AllocateMemoryForArrays(int **&allocatedArray, int size){
	allocatedArray = (int **)malloc(size * sizeof(int));
	for (int i = 0; i < size; i++) {
		allocatedArray[i] = (int *)malloc(size * sizeof(int));
	}
}
void MatrixMultiplicationForArrays(int firstMatrix[][2], int secondMatrix[][2], int size, int **&resultMatrix) {
	AllocateMemoryForArrays(resultMatrix, size);
	int out;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			out = 0;
			for (int x = 0; x < size; x++)
			{
				out += firstMatrix[i][x] * secondMatrix[x][j];
			}
			resultMatrix[i][j] = out;
		}
	}

}

void MatrixMultiplication(int **&resultMatrix, int size, Matrix &m1, Matrix &m2) {
	resultMatrix = (int **)malloc(2 * sizeof(int *));
	for (int i = 0; i < 2; i++)
	{
		resultMatrix[i] = (int *)malloc(2 * sizeof(int));
	}
	int out;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			out = 0;
			for (int x = 0; x < size; x++)
			{
				out += m1.MatrixArray[i][x] * m2.MatrixArray[x][j];
			}
			resultMatrix[i][j] = out;
		}
	}
}