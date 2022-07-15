#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - free list
 * @head: start of string
 * Return: free space
 */
void free_list(list_t *head)
{
	list_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node->str);
		free(node);
	}
	free(head);
}
