#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates array of integers
 * @min: minimum
 * @max: maximum
 * Return: pointer to new array, null if min > max, null if malloc fails
 */

int *array_range(int min, int max)
{
	int *c;
	int i;

	if (min > max)
		return (NULL);
	c = malloc(sizeof(int) * (max - min + 1));
	if (c == NULL)
		return (NULL);
	for (i = 0; i <= max - min; i++)
	{
		c[i] = min + 1;
	}
	return (c);
}
