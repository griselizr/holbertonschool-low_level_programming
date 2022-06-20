#include "main.h"
/**
 * _memcpy - copies a memmory area
 * @dest: character
 * @src: chararacter
 * @n: unsigned int
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int mem;

	for (mem = 0; mem < n; mem++)
	{
		dest[mem] = src[mem];
	}
	return (dest);
}
