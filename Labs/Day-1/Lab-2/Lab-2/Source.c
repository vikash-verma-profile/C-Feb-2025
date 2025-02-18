#include <stdio.h>

int main4() {
	//how segmentation fault OCCur
	//int* ptr;// unintalized (wild pointer)
	//*ptr = 10;
	//printf("Value of ptr %d\n",*ptr);

	//valid vs Invalid memory

	int* validPtr = (int*)malloc(sizeof(int));// valid (Alloocated memory)
	*validPtr = 42;
	printf("Valid pointer value %d\n",*validPtr);

	int* InvalidPtr = NULL; //Null pointer
	*InvalidPtr = 100;
	free(validPtr);
	return 0;
}