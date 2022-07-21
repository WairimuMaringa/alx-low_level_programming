#include "main.h"

/**
 * get_endianness - checks for endianness meaning the order of
 * storing and reading of bytes in a memory
 *
 * Return: 0 if big endian, 1 if small endian
 */

int get_endianness(void)
{
	unsigned int i;
	char *c;

	i = 1;
	c = (char *)&i;

	if (*c)
		return (1);
	return (0);
}
