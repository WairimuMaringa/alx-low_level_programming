#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenate arguments of a program
 * @ac: argument count
 * @av: character array with arguments
 * Return: pointer to new string, otherwise null
 */
char *argstostr(int ac, char **av)
{
	int x, y, z = 0, size = 0;
	char *word;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
			size++;
		size++;
	}
	word = (char *)malloc(sizeof(char) * (size + 1));
	if (word == NULL)
	{
		free(word);
		return (NULL);
	}
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
		word[z] = av[x][y];
		z++;
	}
		word[z] = '\n';
		z++;
	}
	return (word);
}
