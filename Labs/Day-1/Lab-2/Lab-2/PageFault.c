#include <stdio.h>

#define SIZE (1024*1024*1024*2) //1 GB
int main() {
	printf("Allocating a large memory block");
	char* largeArray = (char*)malloc(SIZE);
	if (largeArray == NULL) {
		printf("Memory Allocation failed");
		return 1;
	}
	printf("Memory Allocation successfully");

	for (size_t i = 0; i < SIZE; i++)
	{
		largeArray[i] = 'A';
	}
	printf("Memory accessed .");
	free(largeArray);
	return 0;
}