#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: destination string
 * @src: new string
 * @n: bytes
 *
 * Return: new string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while (*(src + x) && x < n)
	{
		*(dest + x) = *(src + x);
		x++;
	}
	while (x < n)
	{
		*(dest + x) = '\0';
		x++;
	}
	return (dest);
}
