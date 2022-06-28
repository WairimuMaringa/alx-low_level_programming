#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function returning pointer to 2d array
 * @width: grid width
 * @height: grid height
 * Return: pointer to 2d array, otherwise null
 */
int **alloc_grid(int width, int height)
{
	int a, b;
	int **array;

	if (width + height < 2 || width < 1 || height < 1)
		return (NULL);
	array = malloc(height * sizeof(*array));
	if (array == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		array[a] = malloc(width * sizeof(**array));
		if (array[a] == NULL)
		{
			for (a--; a >= 0; a--)
				free(array[a]);
			free(array);
			return (NULL);
		}
		for (b = 0; b < width; b++)
			array[a][b] = 0;
	}
	return (array);
}
