#include "search_algos.h"
int binary_helper(int *array, int value, int low, int high);

/**
 * exponential_search - search array using exponential algo
 *
 * @array: array
 * @size: size
 * @value: value
 *
 * Return: value otherwise -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, start = 0, end = 0;

	if (array == NULL || size == 0)
		return (-1);
	if (array[i] == value)
		return (i);

	i = 1;
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i = i * 2;
	}

	start = i / 2;
	end = ((i > size - 1) ? size - 1 : i);

	printf("Value found between indexes [%ld] and [%ld]\n", start, end);
	return (binary_helper(array, start, end, value));
}

/**
 * binary_helper - binary searching algo
 * @array: array
 * @value: value
 * @low: bottom up
 * @high: up top
 *
 * Return: value else -1
 */
int binary_helper(int *array, int value, int low, int high)
{
	int mid = low + (high - low) / 2, i = 0;

	if (high >= low)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i != low)
				printf(", ");
			printf("%d", array[i]);
		}
		putchar(10);
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			return (binary_helper(array, value, low, mid - 1));
		return (binary_helper(array, value, mid + 1, high));
	}
	return (-1);
}
