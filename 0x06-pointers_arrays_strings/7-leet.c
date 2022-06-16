#include "main.h"

/**
 * leet - change a letter to a number
 * @s: string
 *
 * Return: converted letters
 */

char *leet(char *s)
{
	int letter[5] = {97, 101, 111, 116, 108};
	int number[5] = {52, 51, 48, 55, 49};
	int x, y, pos;

	for (x = 0; *(s + x); x++)
	{
		pos = *(s + x);

		for (y = 0; y < 5; y++)
		{
			if (pos == letter[y] || pos == (letter[y] - 32))
			{
				*(s + x) = number[y];
				break;
			}
		}
	}
	return (s);
}
