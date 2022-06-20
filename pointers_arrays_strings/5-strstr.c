#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: initial string
 * @needle: end of string
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	int  l = 0;

	for (; haystack[l] != '\0'; haystack++)
	{
		while (haystack[l] && needle[l] && haystack[l] == needle[l])
		{
			l++;
		}
		if (!needle[l])
			return (haystack);
	}
	return (0);
}
