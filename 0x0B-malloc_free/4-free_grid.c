#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees up a 2d grid array
 * @grid : 2d grid
 * @height: height of grid
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
