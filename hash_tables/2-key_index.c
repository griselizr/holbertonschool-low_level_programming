#include "hash_tables.h"
/**
 * key_index - Write a function that gives you the index of a key
 * @key: a key to use with has_djb2 function
 * @size:s the size of the array of the hash table
 * Return: 0
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
        return (hash_djb2(key) % size);
}

