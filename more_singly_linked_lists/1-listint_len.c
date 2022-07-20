#include "lists.h"

/**
 * listint_len - locates element sin linked list
 * @h: pointer
 * Return: number of elements in linked list
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *ls;

	unsigned int idx;

	ls = h;

	for (idx = 0; ls; idx++)
		ls = ls->next;
	return (idx);
}
