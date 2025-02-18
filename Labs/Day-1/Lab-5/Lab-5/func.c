#include <stdio.h>


// <return type> (pointername)(parms)
int add(int a, int b);
int subtract(int a, int b);
int Multiply(int a, int b);
int main1() {

	//int (*fun_ptr)(int, int);//Function pointer declartion

	int (*operation[3])(int, int) = { add,subtract,Multiply };
	//fun_ptr = add;
	int choice, a = 10, b = 5;

	printf("Choose operations: 0-Add,1-Subtract,2-Multiply:");
	scanf_s("%d",&choice);
	if (choice >= 0 && choice < 3) {
		printf("Result %d\n", operation[choice](a,b));
	}
	else {
		printf("Invalid choice");
	}
	return 0;
}

int add(int a, int b) {
	return (a + b);
}

int subtract(int a, int b) {
	return (a - b);
}

int Multiply(int a, int b) {
	return (a * b);
}