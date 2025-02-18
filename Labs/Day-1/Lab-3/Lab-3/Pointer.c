#include <stdlib.h>

int main2() {

	int a = 10, b = 20;
	//pointer to constant
	const int* ptr1 = &a;
	ptr1 = &b;//allowed
	//*ptr1 = 30;//not allowed

	//COnstant Pointer

	int* const ptr2 = &a;
	*ptr2 = 30;// allowed
	*ptr2 = &b;// error cannot change the address
	return 0;
}