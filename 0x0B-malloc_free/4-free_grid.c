#include <stdlib.h>
#include "main.h"

/**
 * free_grid - A function that frees a 2 dimensional
 * grid previously created by your alloc_grid function.
 * @grid: 2 dimensional grid
 * @height: 2 dimesional grid height
 * Return: void
 */

void free_grid(int **grid, int height)
{

	int a = 0;

	while (a < height)
	{
		free(grid[a]);
		a++;
	}
	free(grid);
}
