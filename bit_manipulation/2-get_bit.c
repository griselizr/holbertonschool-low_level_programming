#include "main.h"

/**
 * get_bit - return value of a bit
 * @n: search for number of value
 * @index: location of n
 * Return: value of n inside the indez or -1 error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int cmi = 0;

	while (n)
	{
		if (cmi == index)
		{
			if (n % 2)
			{
				return (1);
			}
			else
			{
				return (0);
			}
		}
		n /= 2;
		cmi++;
	}
	if (index > cmi && index < 63)
	{
		return (0);
	}
	return (-1);
}


