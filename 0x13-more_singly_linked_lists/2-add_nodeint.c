#include "lists.h"

/**
 * add_nodeint - add new node at beginning of a list
 * @head: head of a list
 * @n: n elements
 * Return: address of new element, otherwise null
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
