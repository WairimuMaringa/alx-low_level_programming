#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a linked list
 * @head: head of the linked list
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *existing;

	while ((existing = head) != NULL)
	{
		head = head->next;
		free(existing->str);
		free(existing);
	}
}
