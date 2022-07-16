#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - free a list
 * @head: start of string
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
