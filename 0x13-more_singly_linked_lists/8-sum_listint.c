#include "lists.h"

/**
 * sum_listint - returns sum of data(n) of linkedlist
 * @head: head of a list
 * Return: sum, otherwise 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
