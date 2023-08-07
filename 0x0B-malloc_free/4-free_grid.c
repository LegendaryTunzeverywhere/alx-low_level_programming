#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Entry point
 * grid: pointer to array of integers
 * @height: height of 2D array
 *
 * Description: print a 2D dimensional array of integers.
 * Return: nothing.
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
