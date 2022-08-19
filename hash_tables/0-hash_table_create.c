#include "hash_tables.h"

/**
 *hash_table_create -unction that creates a hash table
 *@size:measurement of table
 *Return: hash table or null
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int box = 0;

	table = malloc(sizeof(hash_table_t));

	if (!table)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
		return (NULL);
	for ( ; box < size; box++)
	table->array[box] = NULL;
	return (table);
}
