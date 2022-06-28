#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenation of two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: pointer to s1 and s2 contents, otherwise null
 */

char *str_concat(char *s1, char *s2)
{
	int x, size = 0;
	char *word;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (x = 0; s1[x]; x++)
		size++;
	for (x = 0; s2[x]; x++)
		size++;
	word = (char *)malloc(sizeof(char) * (size + 1));
	if (word == NULL)
		return (NULL);
	size = 0;
	for (x = 0; s1[x]; x++)
	{
		word[size] = s1[x];
		size++;
	}
	for (x = 0; s2[x]; x++)
	{
		word[size] = s2[x];
		size++;
	}
	return (word);
}
