#include "Matrix.h"
#include <string.h>

Matrix::Matrix(int Array[][2]): 
	MatrixArray(){
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			MatrixArray[i][j] = Array[i][j];
		}
	}
}


Matrix::~Matrix()
{
}
