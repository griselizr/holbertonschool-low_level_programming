#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - nth node of linked list
 * @head: start of linked
 * @index: index of node
 * Return: pointer to index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	if (head == NULL)
		return (NULL);

	for (n = 0; n < index; n++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
