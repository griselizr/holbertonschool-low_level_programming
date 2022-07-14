#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints element of a list
 * @h: linked list
 * Return: node
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		nodes++;
	}
	return (nodes);
}
