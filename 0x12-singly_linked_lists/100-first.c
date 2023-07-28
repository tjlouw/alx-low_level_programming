#include <stdio.h>

/**
 * premain - prints string before main function executes
 */
void __attribute__ ((constructor)) premain()
{
	printf("You're beat! and yet,");
	printf(" you must allow,\n");
	printf("I bore my house upon my back!\n");
}
