#include "function_pointers.h"
/**
 * int_index -searches for an integer
 * @array: array with integers
 * @cmp: pointer
 * @size: number of elements in array
 * Return: 0 or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int search;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (search = 0; search < size; search++)
	{

	if (cmp(array[search]) != 0)
		return (search);
	}
		return (-1);
}

