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
	dlistint_t *other;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	(*new).n = n;
	(*new).next = NULL;
	if (*head == NULL)
	{
		(*new).prev = NULL;
		*head = new;
	}
	else
	{
		other = *head;
		if ((*other).next != NULL)
			other = (*other).next;
		(*other).next = new;
		(*new).prev = other;
	}
	return (new);
}


