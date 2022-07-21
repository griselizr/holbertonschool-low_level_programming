#include "lists.h"

/**
 * print_dlistint - print a double linked list
 * @h: header of double linked list
 * Return: nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
		size_t c = 0;
		int p = 0;

		for (; h != NULL; c++)
		{
			if (h->prev != NULL && p == 0)
			{
				h = h->prev;
				continue;
			}
		else if (h->prev == NULL)
		{
			p = 1;
			c = 0;
		}
		printf("%i\n", h->n);
		h = h->next;
		}
		return (c);
}
