#include <stdio.h>
#include <stddef.h>

union Data {
	int i;
	float f;
	char str[20];
};