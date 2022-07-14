#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node - add ndoe
 * @head: the star of the string
 * @str: stirng
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (NULL);
	}

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
