#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: string destination
 * @src: memory area to copy from
 * @n: number or size of elements to copy
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
