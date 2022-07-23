#include "lists.h"

/**
 * dlistint_len -  returns the number of elements in a linked dlist
 * @h: head pointer
 *Return: nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int nodes = 0;
	const dlistint_t *num;

	num = h;

	for (; num != NULL ;)
	{
		num = num->next;
		nodes++;
	}

	return (nodes);
}
