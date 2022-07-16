#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all element of a list
 * @h: linked list
 * Return: nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes;

	nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}

