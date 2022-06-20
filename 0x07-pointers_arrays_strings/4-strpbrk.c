#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: string searches
 *
 * Return: pointer to the bytes in s thatmatchesoneofthebytesinaccept else null
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int x, y;

	for (x = 0; *(s + x); x++)
	{
		for (y = 0; *(accept + y); y++)
		{
			if (*(accept + y) == *(s + x))
			{
				return (s + x);
			}
		}
	}
	return ('\0');
}
