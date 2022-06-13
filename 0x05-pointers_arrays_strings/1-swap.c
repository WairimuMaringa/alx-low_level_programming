#include "main.h"

/**
 * swap_int - swap two integers
 * @a: first pointer integer
 * @b: second pointer integer
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
