#include <stdlib.h>
#include <string.h>

int main() {

	//int arr[5];
	//memset(arr, 0, 5 * sizeof(int));//set all bytes to 0
	////<starting address> ,value to be filled,size
	//printf("Array after memset");
	//for (int i = 0; i < 5; i++)
	//{
	//	printf("%d", arr[i]);
	//}
	char str[50] = "Vikash Verma is a programming teacher";
	memset(str+13,'.',10*sizeof(char));
	printf("%s",str);
	
	printf("\n");

	char src[] = "Hello";
	char dest[6];
	memcpy(dest, src, 6);
	printf("Destination:%s\n",dest);

	return 0;

}