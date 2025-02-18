#include <stdio.h>
#include <stdlib.h>
//int global=10;
int sample = 12;
void display() {
	printf("%d",sample);
}
int main6() {
	//static int i=100;
	display();
	printf("%d", sample);
	return 0;
}



