#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - duplicate string function using strdup
 * @str: string to be duplicated
 *
 * Return: pointer to the duplicated string, otherwise null
 */

char *_strdup(char *str)
{
	char *word;
	int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;
	word = malloc(i * sizeof(*word) + 1);
	if (word == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		word[j] = str[j];
	word[j] = '\0';

	return (word);
}
