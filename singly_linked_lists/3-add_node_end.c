#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node_end - add a node at the end of a string
 * @head: start of the nodes
 * @str: string
 * Return: a new node at the end of the string
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *node;
	int i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
		else
	{
		node = *head;

		for (i = 0; node->next != NULL; i++)
			node = node->next;
		node->next = new;
		return (new);
	}
		return (NULL);
}

