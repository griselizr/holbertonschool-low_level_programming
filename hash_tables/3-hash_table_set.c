#include "hash_tables.h"
/**
 * hash_table_set -a function that adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: the key
 * @value:is the value associated with the key. value must be duplicated. value can be an empty string
 * Return:  1 if it succeeded, 0 otherwise
 * In case of collision, add the new node at the beginning of the list
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *element = NULL;
	unsigned long int i = 0;

	if (!ht || !key || !(*key) || !value)
		return (0);
	i = key_index((const unsigned char *) key, ht->size);

	if (ht->array[i] && !(connect_e(key, ht->array[i], value)))
		return (1);

	element = malloc(sizeof(hash_node_t));
	if (!element)
		return (0);
	element->key = strdup(key);
	element->value = strdup(value);
	if (!(element->key) || !(element->value))
	{
		if (element->key)
			free(element->key);
		free(element);
		return (0);
	}
	element->next = ht->array[i];
	ht->array[i] = element;
	return (1);
}

/**
 * connect_e - verify inside a bucket theres an element
 * @key: key
 * @array: bucket
 * @value: value of node
 * Return: 1 or 0
 */
int connect_e(const char *key, hash_node_t *array, const char *value)
{
	hash_node_t *connect = array;

	while (connect)
	{
		if (!(strcmp(connect->key, key)))
		{
			free(connect->value);
			connect->value = strdup(value);
			return (0);
		}
		connect = connect->next;
	}
	return (1);
}
