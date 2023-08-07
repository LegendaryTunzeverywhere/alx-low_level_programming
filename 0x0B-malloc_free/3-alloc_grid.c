#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Entry point
 * @width: width of the grid
 * @height: height of the grid
 *
 * Description: prints a 2 Dimensional array of integers.
 *
 * Return: grid at Success or Null at failure.
 */
int **alloc_grid(int width, int height)
{
	int **grid, a, b;

	if (width < 1 || height < 1)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		grid[a] = malloc(sizeof(int) * width);
		if (grid[a] == NULL)
		{
			while (--a >= 0)
				free(grid[a]);
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
