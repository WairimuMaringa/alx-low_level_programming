#include "search_algos.h"

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

/**
 * binary_search - search value in sorted array using binaryalgo
 * @array: array to search
 * @size: size of array
 * @value: value to search
 *
 * Return: value otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (binary_helper(array, value, 0, size - 1));
}
