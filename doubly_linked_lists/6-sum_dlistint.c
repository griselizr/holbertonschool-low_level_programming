#include "lists.h"

/**
 * sum_dlistint - sum all data
 * @head: start of node
 * Return: data or null
 */

int sum_dlistint(dlistint_t *head)
{
	int s = 0;
	dlistint_t *data;

	data = head;

	while (data)
	{
		s += data->n;
		data = data->next;
	}
	return (s);
}
