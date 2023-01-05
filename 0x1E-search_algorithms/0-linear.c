#include "search_algos.h"

/**
 * linear_search - search for a value in array of integers
 * @array: array to search
 * @size: size of array
 * @value: value to search
 *
 * Return: first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || size == 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
