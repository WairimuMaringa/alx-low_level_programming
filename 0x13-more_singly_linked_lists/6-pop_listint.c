#include "lists.h"

/**
 * pop_listint - delete head of a node of a linkedlist
 * and return the head node's data
 * @head: head of a linked list
 * Return: 0 or head node's data (n)
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp_head;

	if (!*head)
	{
		return (0);
	}
	n = (*head)->n;
	tmp_head = (*head)->next;
	free(*head);
	*head = tmp_head;

	return (n);
}
