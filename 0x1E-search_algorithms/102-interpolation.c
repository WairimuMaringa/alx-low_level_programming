#include "search_algos.h"

/**
 * interpolation_search - search for value in sorted array using algo
 *
 * @array: array
 * @size: size of array
 * @value: value to search
 *
 * Return: value otherwise -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = 0, mid = 0;

	if (array == NULL || size == 0)
		return (-1);

	high = size - 1;

	while ((array[high] != array[low]) &&
		array[low] <= value && array[high] >= value)
	{
		mid = low + (((double)(high - low) / (array[high] - array[low])) *
			(value - array[low]));

		printf("Value checked array[%ld] = [%d]\n", mid, array[mid]);

		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}

	if (value == array[low])
		return (low);

	mid = low + (((double)(high - low) / (array[high] - array[low])) *
			(value - array[low]));
	printf("Value checked array[%ld] is out of range\n", mid);
	return (-1);
}
