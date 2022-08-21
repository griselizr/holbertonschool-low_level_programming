#include "hash_tables.h"

/**
 * hash_table_get -  function that retrieves a value associated with a key
 * @ht:hash table
 * @key: key
 * Return: value with element or null
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int i;

	if (ht == NULL)
		return (0);

	if (key == NULL || (strcmp(key, "") == 0))
		return (0);
	i = key_index((unsigned char *)key, ht->size);

	current = ht->array[i];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
		current = current->next;
	}
	return (NULL);
}
