#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at index of doublylinkedlist
 * @head: head of the list
 * @index: index of the node to be deleted. starts at 0
 * Return: 1 on success, otherwise -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;

	if (tmp == NULL)
		return (-1);
	if (index == 0)
	{
		*head = tmp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		while (tmp != NULL)
		{
			if (index == 0)
				break;
			index--;
			tmp = tmp->next;
		}
		if (tmp == NULL && index != 1)
			return (-1);
		tmp->prev->next = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = tmp->prev;
	}
	free(tmp);
	return (1);
}
