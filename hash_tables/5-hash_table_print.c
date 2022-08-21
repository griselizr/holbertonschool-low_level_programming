#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 * Return: hast table or null
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	unsigned long int brace = 0;
	hash_node_t *tmp;

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (brace == 1)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			brace = 1;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
