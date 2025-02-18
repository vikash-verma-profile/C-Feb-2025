#include <stdio.h>
#include <stdlib.h>

void memoryleak() {
	int* ptr = (int*)malloc(sizeof(int) * 10);
	free(ptr);
	free(ptr);

	for (int i = 0; i < 5; i++)
	{
		int* ptr = (int*)malloc(sizeof(int) * 10);
		if (ptr != NULL) {
			free(ptr);
			ptr = NULL;
		}
	}
}
int  main()
{
	memoryleak();

	return 0;
}