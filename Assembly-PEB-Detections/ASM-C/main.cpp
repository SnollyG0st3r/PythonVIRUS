#include "processor.h"
#include "isdebugged.h"
#include "NtGlobalFlag.h"

//Coded By B3mB4m
//b3mb4m@tuta.io

int main( void )
{
	if(processor() == 1)	exit(0);
	if(isdebugged() == 1)	exit(0);
	if (NtGlobalFlag32() == 0x70)	exit(0);
	//You can use NtGlobalFlag64 bit version too.

	printf("Virtual Box not detected !");
	
}

