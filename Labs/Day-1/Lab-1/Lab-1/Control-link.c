#include <stdio.h>

//int Demo(int x) {
//	printf("value of x is : %d",x);
//}
int Demo() {
	printf("I am called from Main()");
}
int main() {
	int x, y;
	Demo(10);
	return 0;
}