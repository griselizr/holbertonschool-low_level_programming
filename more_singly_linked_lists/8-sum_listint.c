#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - sum of listin
 * @head: pointer
 * Return: result of sum
 */
int sum_listint(listint_t *head)
{
	int s = 0;

	if (head == NULL)
		return (0);
	while (head->next)
	{
		s += head->n;
		head = head->next;
	}
	s += head->n;
	return (s);
}
