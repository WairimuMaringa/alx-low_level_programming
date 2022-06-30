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
	int i = 0;

	if (min > max)
		return (NULL);
	c = (int *)malloc(sizeof(int) * (max - min + 1));
	if (c == NULL)
	{
		free(c);
		return (NULL);
	}
	for (; min <= max; min++, i++)
		c[i] = min;
	return (c);
}
