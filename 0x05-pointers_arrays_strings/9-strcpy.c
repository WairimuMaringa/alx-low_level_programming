#include "main.h"

/**
 * _strcpy - copy string
 * @dest: pointer to destination array where copying will occur
 * @src: string to be copied
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (x >= 0)
	{
		*(dest + x) = *(src + x);
		if (*(src + x) == '\0')
			break;
		x++;
	}
	return (dest);
}
