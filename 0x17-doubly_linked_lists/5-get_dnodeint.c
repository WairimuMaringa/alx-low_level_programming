#include "lists.h"
/**
 * get_dnodeint_at_index - return nth node of doublylinkedlist
 * @head: head of the list
 * @index: index of the node starting at 0
 * Return: nth node, otherwise null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x;

	if (head == NULL)
		return (NULL);
	while (head->prev != NULL)
		head = head->prev;

	x = 0;

	while (head != NULL)
	{
		if (x == index)
			break;
		head = head->next;
		x++;
	}

	return (head);
}
