#include "search_algos.h"

/**
 *binary_search -searches for a value in a sorted array of integers
 *@array:pointer to elements
 *@size: amount of elements
 *@value: to search
 *Return: value or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t min = 0;
	size_t max = size - 1;
	size_t middle;

	if (array == NULL)
	{
		return (-1);
	}

	while (min <= max)
	{
		printf("Searching in array: ");
		for (i = min; i <= max; i++)
		{
			if (i == max)
				printf("%i\n", array[i]);
			else
				printf("%i, ", array[i]);
		}

		middle = (min + max) / 2;
		if (value == array[middle])
		{
			return (middle);
		}
		else if (value < array[middle])
		{
			max = array[middle - 1];
		}
		else if (value > array[middle])
		{
			min = array[middle + 1];
		}
	}
	return (-1);
}
