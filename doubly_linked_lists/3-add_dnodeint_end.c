#include "lists.h"

/**
 * add_dnodeint_end - add node end of dlist
 * @head: start of node
 * @n: nodes
 * Return: address of new node or null
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *other = *head;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		other = *head;
		while (other->next)
			other = other->next;
		new->prev = other;
		other->next = new;
	}
	return (new);
}


