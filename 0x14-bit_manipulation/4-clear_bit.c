#include "main.h"

/**
 * clear_bit - set value of a bit to 0 at given index
 * @n: pointer to an unsigned long int
 * @index: given index
 * Return: 1, otherwise -1 if it fails
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;

	if (index > 63)
		return (-1);

	x = 1 << index;

	if (*n & x)
		*n ^= x;

	return (1);
}
