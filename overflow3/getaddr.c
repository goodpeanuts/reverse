#include<stdio.h>
#include "windows.h"

typedef void (*FuncPointer)(LPTSTR);
int main(){
	HINSTANCE LibHandle;
	FuncPointer GetAddr;
	LibHandle=LoadLibrary("user32");
	GetAddr=(FuncPointer)GetProcAddress(LibHandle,"MessageBoxA");;
	printf("0x%x\n",GetAddr);
	return 0;
}

