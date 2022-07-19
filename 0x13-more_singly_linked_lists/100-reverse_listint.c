#include "lists.h"

/**
 * reverse_listint - function that reverses a linked list
 * @head: head of a list
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL, *new_node = NULL;

	while (*head != NULL)
	{
		new_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = new_node;
	}
	*head = prev_node;

	return (*head);
}
