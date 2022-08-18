#include "lists.h"


/**
 * get_dnodeint_at_index - get  nth node of a dlistint_t linked list
 * @head: start of node
 * @index: n of nodes
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *g;

	if (!head)
		return (0);

	g = head;

	while (index > 0)
	{
		if (g->next == NULL)
			return (NULL);

		g = g->next;
		index--;
	}

	return (g);
}
