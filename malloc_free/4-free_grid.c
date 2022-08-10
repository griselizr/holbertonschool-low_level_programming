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
	int idx = 0;

	while (idx < height)
	{
		idx++;
		free(grid[idx]);
	}
		free(grid);
}
