#include <iostream>

int** CreateMatrix(size_t rows, size_t columns)
{
	int** matrix = new int*[rows];

	for (size_t i = 0; i < rows; i++) 
    {
		matrix[i] = new int[columns];
    }

	for (size_t i = 0; i < rows; i++) 
    {
		for (size_t y = 0; y < columns; y++) 
        {
			matrix[i][y] = NULL; 
        }
    }

	return matrix;
}

int** multiplyMatrix(int **A, size_t a_rows, size_t a_col, int **B, size_t b_rows, size_t b_col)
{
	int** multiply = CreateMatrix(a_rows, b_col);

	for (size_t i = 0; i < a_rows; i++) 
    {
		for (size_t y = 0; y < b_col; y++) 
        {
			for (size_t k = 0; k < a_rows; k++) 
            {
				multiply[i][y] += A[i][k] * B[k][y];
            }
        }
    }

	return multiply;
}