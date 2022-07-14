#include "lists.h"

/**
 * list_len - locates elementss on a linked list
 * @h: pointer
 * Return: number of elements of al inked list
 */

size_t list_len(const list_t *h)
{
	const list_t *ls;
	unsigned in idx;

	ls = h;
	for (idx = 0; ls; idx++)
		ls =lis->next;
	return (idx);
}
