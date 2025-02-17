#include <stdio.h>
#include <stdlib.h>

int main2() {
	

	/*
	int arr[5] = { 1,2,3,4,5 };

	int(*ptr)[5] = &arr;

	printf("First Element%d",(*ptr)[0]);
	printf("\n");
	printf("Second Element%d", *(*ptr+1));
	*/

	int(*arr) = (int*)malloc(5*sizeof(int));
	if (arr == NULL)
	{
		printf("Memory allocation failed \n");
		return 1;
	}
	for (int i = 0; i < 5; i++)
	{
		arr[i] = i * 10;
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d", arr[i]);
	}
	free(arr);
}