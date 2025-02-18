#include <stdio.h>
#include <stdlib.h>

//function returining pointer to array
int* generateArray(int size) {
	int* arr = (int*)malloc(size * sizeof(int));
	for (int i = 0; i < size; i++)
	{
		arr[i] = i * 10;
	}
	return arr;
}

int operatre(int x, int y, int(*func)(int, int)) {
	return func(x, y);
}
int Sum(int a, int b)
{
	return a + b;
}
int main() {
	//int size = 5;
	//int* arr = generateArray(size);
	//printf("Generated array");
	//for (int  i = 0; i < size; i++)
	//{
	//	printf("%d",arr[i]);
	//}
	//free(arr);

	printf("Addition%d", operatre(5, 3, Sum));
	return 0;
}
