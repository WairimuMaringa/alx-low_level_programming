#include "search_algos.h"

/**
 * jump_search - search for value in sorted array using algo
 * @array: array to search
 * @size: size of array
 * @value: value to search
 *
 * Return: value otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t root = 0, i_start = 0, i_end = 0;

	if (array == NULL || size == 0)
		return (-1);

	root = sqrt(size);

	while (i_end < size && array[i_end] < value)
	{
		i_start = i_end;
		i_end = i_start + root;
		printf("Value checked array[%ld] = [%d]\n", i_start, array[i_start]);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i_start, i_end);
	for ( ; i_start < size && i_start <= i_end; i_start++)
	{
		printf("Value checked array[%ld] = [%d]\n", i_start, array[i_start]);
		if (array[i_start] == value)
			return (i_start);
	}
	return (-1);
}
