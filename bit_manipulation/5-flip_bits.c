#include "main.h"

/**
 * flip_bits - returns the number of bits needed to flip to get
 * @n: number to flip with m
 * @m: number to flip with n
 * Return: number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int f, total = 0;

	f = n ^ m;
	while (f)
	{
		if (f & 1)
		{
			total++;
		}
		f >>= 1;
	}
	return (total);
}
