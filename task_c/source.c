#include <stdlib.h>

typedef unsigned char UINT8;

bool Foo(UINT8 buff[6])
{
	if (buff[2] == -1) { return true; } else { return false; }
}

int main()
{
	if (Foo(0xFFFFFFFFFFFF)) { printf("true"); } 
	else { printf("false");}
}