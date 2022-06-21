#include "main.h"
/**
 * sq_verify - verify the square root of c
 * @sr: of sq
 * @v: verify square root
 * Return: -1 or sq of c
 */
int sq_verify(int sr, int v)
{
	if (sr * sr == v)
		return (sr);
	if (sr * sr > v)
		return (-1);
	return (sq_verify(sr + 1, v));
}




/**
 * _sqrt_recursion - returns natural square root of n
 * @n: number
 * Return: 0 or 1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sq_verify(1, n));
}


