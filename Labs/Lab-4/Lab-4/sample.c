#include <stdio.h>
#include <stdlib.h>

int main() {
	int arr[] = { 10,20,30 };
	int* ptr = arr;
	ptr++;
	printf("some valiue %p ,Value : %d\n",ptr,*ptr);
	//arr++;
	//arr=arr+1;

	return 0;
}