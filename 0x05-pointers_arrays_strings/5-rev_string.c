#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	char l;
	int len1, len2, len3;

	len1 = len2 = 0;
	while (*(s + len1) != '\0')
	{
		len1++;
	}
	len3 = (len1 / 2);
	while (len3--)
	{
		len1--;
		l = *(s + len1);
		*(s + len1) = *(s + len2);
		*(s + len2) = l;
		len2++;
	}
}
