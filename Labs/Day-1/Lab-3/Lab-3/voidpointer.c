#include <stdlib.h>

int main3() {
	int a = 10;
	double b = 3.14;

	void* ptr;
	ptr = &a;
	printf("Value of (int) :%d\n",*(int*)ptr);

	ptr = &b;
	printf("Value of (double) :%.2f\n", *(double*)ptr);

	return 0;
}