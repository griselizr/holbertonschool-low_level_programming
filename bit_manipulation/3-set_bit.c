#include "main.h"

/**
 * set_bit - sets bit to 1
 * @n: number
 * @index: location of n
 * Return: 1  or -1 error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	return ((*n |= 1 << index) ? 1 : -1);
}
