#include "search_algos.h"
/**
 *linear_search - searches for a value in an array of integers
 *@array: pointer to elements
 *@size: amount of elements
 *@value: to search
 *Return: valur or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t p;
	int store;

	if (array != NULL)
	{
		for (p = 0; p < size; p++)
		{
			store = array[p];
			printf("value founded[%lu] = [%d]\n", p, store);
			if (store == value)
				return (p);
		}
	}
	return (-1);
}
