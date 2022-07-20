#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: start of a string
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *g = 0;

	if (head)
	{
		while (*head != NULL)
		{
			g = *head;
			*head = (*head)->next;
			free(g);
		}
	}
	else
		return;
			free(*head);
	*head = 0;
}
