#pragma once
#include "Matrix.h"

void MatrixMultiplicationForArrays(int firstMatrix[][2], int secondMatrix[][2], int size, int **&resultMatrix);
void MatrixMultiplication(int **&resultMatrix, int size, Matrix &m1, Matrix &m2);