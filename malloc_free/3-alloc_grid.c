#include "main.h"
#include <stdlib.h>
/**
 *alloc_grid - return pointer
 *@width: integer
 *@height: integer
 *Return: pointer or NULL
 */
int **alloc_grid(int width, int height)
{
	int i, count;
	int **str;

	if (width <= 0 || height <= 0)
		return (NULL);

	str = malloc(height * sizeof(*str));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		str[i] = malloc(width * (sizeofi));
			if (str[i] == NULL)
			{
				for (count = 0; count < i; count++)
				free(str[count]);
				free(str);
				return (NULL);
			}
		for (count = 0; count < width; count++)
			str[i][count] = 0;
	}
	return (str);
}
