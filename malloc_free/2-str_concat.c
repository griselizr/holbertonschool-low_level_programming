#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *str_concat - concatenates two strings
 *@s1: string
 *@s2: string
 *Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	char *t;
	int lk1, lk2, sum;

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
	t = malloc((sizeof(char) * (lk1 + lk2) + 1));
	if (t == NULL)
		return (NULL);
	for (sum = 0; sum < lk1; sum++)
		t[sum] = s1[sum];
	for (; sum < lk2 + lk1; sum++)
	{
		t[sum] = *s2;
		s2++;
	}
	return (t);
}


