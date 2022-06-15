#include "main.h"

/**
 * reverse_array - reverse content of an array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i, j, temp;

	i = n / 2;
	n--;

	for (j = 0; j < i; j++)
	{
		temp = *(a + j);
		*(a + j) = *(a + (n - j));
		*(a + (n - j)) = temp;
	}
}

