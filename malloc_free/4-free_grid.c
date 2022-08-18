#include "main.h"
#include <stdlib.h>
/**
 *free_grid - free grid
 *@grid: size of array
 *@height: character
 *Return: pointer or NULL
 */
void free_grid(int **grid, int height)
{
	int idx;

	idx = 0;
	while (idx < height)
	{
		free(grid[idx]);
		idx++;
	}
		free(grid);
}
