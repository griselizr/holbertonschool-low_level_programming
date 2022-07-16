#include "lists.h"

/**
 * add_nodeint_end - add a new node at the tail
 * @head: beginnign of a string
 * @n: variable
 * Return: address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last = *head;
	listint_t  *node = NULL;

	node = malloc(sizeof(listint_t));

	if (node == NULL && n != 0)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
		last->next = node;
		return (node);
}


