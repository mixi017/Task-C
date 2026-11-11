#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

typedef unsigned char UINT8;

bool foo(UINT8 buff[6])
{
	if (buff[2] == -1) { return true; } else { return false; }
}

int main()
{
	if (foo(0xFFFFFFFFFFFF)) { printf("true"); } 
	else { printf("false");}
}