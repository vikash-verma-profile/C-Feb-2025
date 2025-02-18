#include <stdio.h>
#include <stdlib.h>

int main1() {
	/*int arr[] = { 10,20,30,40,50 };
	int* ptr = arr;

	printf("Using arrays");
	for (int i = 0; i < 5; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
	printf("Using pointers");
	for (int i = 0; i < 5; i++)
	{
		printf("%d",*(ptr+i));
	}*/

	char* arr[3];

	arr[0] = (char*)malloc(10 * sizeof(char));
	arr[1] = (char*)malloc(10 * sizeof(char));
	arr[2] = (char*)malloc(10 * sizeof(char));

	snprintf(arr[0],10,"Hello");
	snprintf(arr[1], 10, "World");
	snprintf(arr[2], 10, "in C");

	for (int i = 0; i < 3; i++)
	{
		printf("%s\n",arr[i]);
		free(arr[i]);
	}

}