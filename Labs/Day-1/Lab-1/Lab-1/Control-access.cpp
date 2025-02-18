#include <stdio.h>

int a = 100;
int sample(int b)
{
	int c = a + b;
	return c;
}
int sample1(int b) {
	return sample(2 * b);
}
int main4(int argc, char* argv[]) {
	(void)printf("The answer is %d \n", sample1(a));
	return 0;
}