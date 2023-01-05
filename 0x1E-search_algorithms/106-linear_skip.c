#include "search_algos.h"

/**
 * linear_skip - search for value in sorted skip list
 *
 * @list: pointer to head of skip list
 * @value: vale to search for
 *
 * Return: pointer to the first node of value
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *flash = NULL;

	if (list == NULL)
		return (NULL);

	flash = list;

	while (flash != NULL && flash->n < value)
	{
		list = flash;
		flash = flash->express;
		if (flash != NULL)
		{
			printf("Value checked at index [%ld] = [%d]\n", flash->index, flash->n);
		}
		else
		{
			flash = list;
			while (flash->next != NULL)
				flash = flash->next;
			break;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
		list->index, flash->index);

	while (list != flash->next)
	{
		printf("Value checked at index [%ld] = [%d]\n", list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}

	return (NULL);
}
