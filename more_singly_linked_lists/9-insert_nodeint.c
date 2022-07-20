#include "lists.h"

/**
 * insert_nodeint_at_index - new node
 * @head: start
 * @idx: idx of list
 * @n: number of elements
 * Return: address of new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *other = *head;

	unsigned int i = 0;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}

	else
	{
		for (i = 0; i < idx - 1; i++)
		{
			other = other->next;

			if (other == NULL)
			{
				free(new);
				return (NULL);
			}
		}
		new->next = other->next;
		other->next = new;
		}
		return (new);
}

