#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create array of characters and initialize
 * @size: size of array
 * @c: specific character
 *
 * Return: pointer to the array, otherwise null
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
