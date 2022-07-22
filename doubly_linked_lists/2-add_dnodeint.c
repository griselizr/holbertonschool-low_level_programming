#include "lists.h"

/**
 * *add_dnodeint - add new node at star of dlink list
 * @head: start of nodes
 * @n: number
 * Return: address of new element or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newn;

	newn = malloc(sizeof(dlistint_t));

	if (newn == NULL)
	{
		return (NULL);
	}
		newn->n = n;
		newn->next = *head;
		newn->prev = NULL;
	if (*head != NULL)
	(*head)->prev = newn;
	*head = newn;
	return (newn);
}
