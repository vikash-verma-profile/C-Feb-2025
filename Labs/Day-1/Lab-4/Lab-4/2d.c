#include <stdio.h>
#include <stdlib.h>

int main4() {

	int rows = 3, cols = 4;
	int** arr;
	int counter = 1;
	arr = (int**)malloc(rows*sizeof(int*));

	for (int i = 0; i < rows; i++)
	{
		arr[i] = (int*)malloc(cols * sizeof(int));
	}
	for (int row = 0; row < rows; row++)
	{
		for (int col = 0; col < cols; col++)
		{
			arr[row][col] = counter;
			counter= counter+1;
		}
	}

	for (int row = 0; row < rows; row++)
	{
		for (int col = 0; col < cols; col++)
		{
			printf("%d",arr[row][col]);
		}
		printf("\n");
	}

	for (int i = 0; i < rows; i++)
	{
		free(arr[i]);
	}
	free(arr);
	return 0;
}