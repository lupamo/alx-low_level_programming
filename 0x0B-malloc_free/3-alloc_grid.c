#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - returns a 2D array
 * @width: row number
 * @height:column numbers
 * Return: 0 aftre success
 */
int **alloc_grid(int width, int height)
{
	int a, b, c, d;
	int **sqr;

	if (width <= 0 || height <= 0)
		return (NULL);
	sqr = malloc(sizeof(int *) * height);

	if (sqr == NULL)
	{
		free(sqr);
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		sqr[a] = malloc(sizeof(int) * width);

		if (sqr[a] == NULL)
		{
			for (b = a; b >= 0; b--)
			{
				free(sqr[b]);
			}
			free(sqr);
			return (NULL);
		}
	}
	for (c = 0; c < height; c++)
	{
		for (d = 0; d < width; d++)
		{
			sqr[c][d] = 0;
		}
	}
	return (sqr);
}
