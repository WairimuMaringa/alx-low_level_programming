#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at given index of linkedlist
 * @head: head of a list
 * @index: index position to be deleted
 * Return: 1 if successful, otherwise -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del_node;
	unsigned int i = 0;

	while (*head)
	{
		if (i == index)
		{
			del_node = (*head);
			*head = (*head)->next;
			free(del_node);
			return (1);
		}
		head = &(*head)->next;
		i++;
	}
	return (-1);
}
