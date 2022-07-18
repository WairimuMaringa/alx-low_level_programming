#include "lists.h"

/**
 * get_nodeint_at_index - function that returns nth node of linkedlist
 * @head: head of a list
 * @index: index of the node starting at zero
 * Return: node, otherwise null
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
