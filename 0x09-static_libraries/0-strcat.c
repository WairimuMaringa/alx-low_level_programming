#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: destination of string
 * @src: new string
 *
 * Return: concatenated strings
 */

char *_strcat(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (*(dest + x))
	{
		x++;
	}
	while (*(src + y))
	{
		*(dest + x) = *(src + y);
		x++;
		y++;
	}
	return (dest);
}
