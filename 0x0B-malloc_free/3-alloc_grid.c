#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - A function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: Input width
 * @height: Input height
 * Return: Pointer to a dimensional array,
 * NULL on failure or if width or height is
 * less than or equal to 0
 */

int **alloc_grid(int width, int height)
{

	int **grid;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		grid[a] = malloc(sizeof(int) * width);
		if (grid[a] == NULL)
		{
			while (a >= 0)
			{
				free(grid[a]);
				a--;
			}
			free(grid);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			grid[a][b] = 0;
	}
	return (grid);
}
