#include <iostream>

void Transpose(int matrix[][3], int rows, int cols);

int main()
{
	const int rows = 3;
	const int cols = 3;
	int matrix[rows][cols]{ {1,2,3}, {4,5,6}, {7,8,9} };

	Transpose(matrix, rows, cols);

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}

}

void Transpose(int matrix[][3], int rows, int cols)
{
	for (int i = 0; i < rows - 1; i++)
	{
		for (int j = i + 1; j < cols; j++)
		{
			int temp = matrix[i][j];
			matrix[i][j] = matrix[j][i];
			matrix[j][i] = temp;
		}
	}
}