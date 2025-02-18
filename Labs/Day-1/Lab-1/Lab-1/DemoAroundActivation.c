#include <stdio.h>

void _cdecl cdel_function() {
	printf("CDECL function");
	// the arguments are pushed from Right to LEFT
	// Caller cleans the stack
}
void _stdcall stdcall_function() {
	printf("STDCALL function");
	//Arguments are pushed from RIGHt to left;
	//Callee cleans the stack
}
//c++
void __thiscall thiscall_function() {
	printf("THIS CALL function");
	//Arguments are pushed from RIGHt to left;
	// this pointer is passed vis Register and Not on the stack'
	//Callee cleans the stack

}
int main() {
	cdel_function();
	stdcall_function();
	thiscall_function();
	return 0;
}