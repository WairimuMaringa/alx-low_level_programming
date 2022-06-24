#include "main.h"

/**
 * _strncat - concatenates two strings and uses n bytes
 * @dest: destination of string
 * @src: new string
 * @n: bytes used
 *
 * Return: concatenated strings
 */

char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y = 0;

	while (*(dest + x))
	{
		x++;
	}
	while (*(src + y) && y < n)
	{
		*(dest + x) = *(src + y);
		x++;
		y++;
	}
	return (dest);
}
