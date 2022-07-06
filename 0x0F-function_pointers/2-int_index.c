#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - function that searches for an integer
 * @array: array
 * @size: number of elements in array
 * @cmp: pointer to the function
 * Return: index of first elemnt that matches with 'cmp', -1 otherwise
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);
		if (result > 0)
			return (i);
	}
	return (-1);
}
