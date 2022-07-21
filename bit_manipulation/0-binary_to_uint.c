#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint -convert binary number to int
 * @b: pointer
 * Return: number o 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len, count = 0, sum = 0;

	if (b == NULL)
	{
		return (0);
	}
	len = _strlen(b);
	while (len--)
	{
		if (b[len] != 48 && b[len] != 49)
		{
			return (0);
		}
	if (b[len] == 49)
	{
		sum += 1 << count;
	}
	count++;
	}
	return (sum);
}

/**
 * _strlen - function that returns the length of a string
 * @s: pointer
 * Return: 0
 */
int _strlen(const char *s)
{
	int len = 0;

	while (s[len])
	{
		len++;
	}
	return (len);
}
