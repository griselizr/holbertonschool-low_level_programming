#include "main.h"
/**
 * is_prime_number - natural number greater than 1
 * @n: number
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
		if (n == 1)
		{
			return (1);
		}
		else
		{
			if (n < 2)
			{
				return (0);
			}
			else
			{
				return (is_prime_number(n - 1));
			}
		}
}

