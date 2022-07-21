#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number
 */

void print_binary(unsigned long int n)
{
	int binarynum;

	if (n >> 1)
		print_binary(n >> 1);
	binarynum = n & 1;
	_putchar(binarynum + '0');
}
