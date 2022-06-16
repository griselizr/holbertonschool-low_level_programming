#include "main.h"
/**
 * _strncat - concatenate two strings with a number of characters
 * @dest: initial string
 * @src: end of string
 * @n: number of characters
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b;

		while (dest[a] != '\0')
			a++;
		
	for (b = 0; b < n; b++, a++)
		dest[a] = src[b];
		

	return (dest);
}

