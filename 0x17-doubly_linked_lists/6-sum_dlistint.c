#include "lists.h"
/**
 * sum_dlistint - return sum of all data in dlinkedlist
 * @head: head of the list
 * Return: sum of data, otherwise 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
