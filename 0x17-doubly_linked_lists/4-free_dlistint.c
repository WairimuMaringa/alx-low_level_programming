#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: head of the list
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		free_dlistint(head->next);
	}
}
