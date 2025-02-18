//#include <stdio.h>
//#include <stdlib.h>
//
//int global_var = 10;// Data segment
//static int static_var = 20;//Data segment
//
//void function() {
//	int stack_var = 30;// stored in stack segment
//	printf("Stack Variable:%d \n",stack_var);
//}
//
//int main() {
//
//	int local_var = 40;// STack sengment
//	int* heap_var = (int*)malloc(sizeof(int));//Heap segment
//	*heap_var = 50;
//
//	printf("Text segment%p \n",(void*)main);
//	printf("Data segment%p,%p\n",(void*)&global_var,(void*)&static_var);
//	printf("Heap segment%p\n", (void*)heap_var);
//	printf("Stack segment%p\n", (void*)&local_var);
//	function();
//	free(heap_var);
//	
//	return 0;
//}
//
