#include "lists.h"
#include <stdio.h>

/**
 * list_len - number of elements in a linked list
 * @h: structure
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t number = 0;

	while (h != NULL)
	{
		h = h->next;
		number++;
	}
	return (number);
}
