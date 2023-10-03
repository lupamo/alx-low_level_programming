#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - returns freed 2d array
 * @grid: grid of 2d array
 * @height: height of the 2d array
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
