#include "lists.h"

/**
 * listint_len - funct that returns no of elements in a linkedlist
 * @h: head
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t numnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		numnodes++;
	}
	return (numnodes);
}
