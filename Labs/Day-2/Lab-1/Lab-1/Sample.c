#include <stdio.h>
#include <stddef.h>

#pragma pack(1) //force 1-byte alignment
//struct Unpacked {
//	char a; //1 byte
//	int b; //4 bytes
//	short c; //2 bytes
//};
struct Packed {
	char a; //1 byte
	int b; //4 bytes
	short c; //2 bytes
};

/*
* 
* if using GCC or CLang
struct _attibute_((packed)) PackedGCC {

}
*/
int main() {
	printf("Size of unpacked struct %lu bytes",sizeof(struct Packed));
	return 0;
}