#include <stdio.h>
#include <stdlib.h>

int main1() {
	int* arr = (int*)malloc(5 * sizeof(int));
	if (arr == NULL) {
		printf("Memory allocation failed \n");
		return 1;
	}
	//assign calues
	for (int i = 0; i < 5; i++)
	{
		arr[i] = i + 1;
	}
	//print intial value
	printf("Intial Values");
	for (int i = 0; i < 5; i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");

	arr = (int*)realloc(arr, 10 * sizeof(int));
	if (arr == NULL) {
		printf("Memory allocation failed \n");
		return 1;
	}
	for (int i = 5; i < 10; i++)
	{
		arr[i] = i + 1;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d", arr[i]);
	}

	free(arr);
	return 0;
}