#include "lists.h"

/**
 * free_dlistint- free node
 * @head: start of node
 * Return: none
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *f;

	if (head == NULL)
		return;

	while (head)
	{
		f = head;
		head = (*head).next;
		free(f);
	}
	head = NULL;
}

