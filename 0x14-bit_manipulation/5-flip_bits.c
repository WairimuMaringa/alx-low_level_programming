#include "main.h"

/**
 * flip_bits - return number of bits needed to flip to
 * get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = 0, y = 0;

	x = n ^ m;
	while (x)
	{
		if (x & 1)
			y++;
		x = x >> 1;
	}
	return (y);
}
