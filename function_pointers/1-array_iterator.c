#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * @array: execute
 * @action: pointer
 * @size: of array
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t it;

	if (array && action)
	{
		for (it = 0; it < size; it++)
		{
			action(array[it]);
		}
	}
}
