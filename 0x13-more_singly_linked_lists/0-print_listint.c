#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print all elements of a list
 * @h: head
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t numnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		numnodes++;
	}
	return (numnodes);
}
