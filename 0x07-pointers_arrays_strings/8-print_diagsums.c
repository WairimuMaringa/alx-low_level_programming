#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sum of two diagonals of a square matrix of integers
 * @a: two dimensional array
 * @size: size of the array
 *
 * Result: nothing
 */

void print_diagsums(int *a, int size)
{
	int x, sum1 = 0, sum2 = 0, ss;

	ss = size * size;
	for (x = 0; x < ss; x++)
	{
		if (x % (size + 1) == 0)
			sum1 += *(a + x);
		if (x % (size - 1) == 0 && x != 0 && x != (ss - 1))
			sum2 += *(a + x);
	}
	printf("%d, %d\n", sum1, sum2);
}
