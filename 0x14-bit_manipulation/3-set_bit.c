#include "main.h"

/**
 * set_bit - set value of a bit to 1 at given index
 * @n: pointer of an unsigned long int
 * @index: given index
 * Return: 1 if it worked, otherwise -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > 63)
		return (-1);

	x = 1 << index;
	*n = (*n | x);

	return (1);
}
