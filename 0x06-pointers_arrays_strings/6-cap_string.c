#include "main.h"

/**
 * cap_string - capitlize all words of a string
 * @s: string
 *
 * Return: string with uppercase
 */

char *cap_string(char *s)
{
	int i, j, pos, upper;
	/*ASCII ' ', 'tab', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'*/
	int sep_words[13] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	upper = 0;
	for (i = 0; *(s + i); i++)
	{
		pos = *(s + i);
		if ((i == 0 || upper == 1) && (pos >= 97 && pos <= 122))
			*(s + i) = (*(s + i) - 32);
		for (j = 0; j < 13; j++)
		{
			if (pos == sep_words[j])
			{
				upper = 1;
				break;
			}
			else
			{
				upper = 0;
			}
		}
	}
	return (s);
}
