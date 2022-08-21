#include "hash_tables.h"
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
