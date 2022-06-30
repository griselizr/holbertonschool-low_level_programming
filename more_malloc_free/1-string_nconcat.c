#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenate two strings
 *@s1: string
 *@s2: string
 *@n: bytes
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *t;
	unsigned int lk1, lk2, sum;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (lk1 = 0; s1[lk1]; lk1++)
	{
	}
	for (lk2 = 0; s2[lk2]; lk2++)
	{
	}
	if (lk2 >= n)
		lk2 = n;
	t = malloc((sizeof(char) * (lk1 + lk2) + 2));
		if (t == NULL)
		return (NULL);

	for (sum = 0; sum < lk1; sum++)
	{
		t[sum] = s1[sum];
	}
	for (sum = 0; sum  < lk2; sum++)
	{
		t[sum + lk1] = s2[sum];
	}
		t[lk1 + lk2] = '\0';
	return (t);
}




