#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes a head node
 * @head: start of node
 * Return: 0
 */

int pop_listint(listint_t **head)
{
	listint_t *pop;

	int d;

	if (*head == NULL)
		return (0);

	pop = *head;
	*head = (*head)->next;
	d = pop->n;

	free(pop);
	return (d);
}
