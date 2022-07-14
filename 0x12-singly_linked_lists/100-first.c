#include <stdio.h>

/**
 * befmain - function to be executed before main
 * Return: nothing
 */

void __attribute__ ((constructor)) befmain()
{
	printf("You're beat! and yet, you must allow, \n");
	printf("I bore my house upon my back!\n");
}
