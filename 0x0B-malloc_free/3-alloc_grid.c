#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - allocates a 2d array of integers
 * @width: column
 * @height: row
 *
 * Return: 2d array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i,j;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		gird[i] = malloc(size(int) * width);
		if (grid[i] == NULL)
		{
			for (i=0; i < height; i++)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}

		for (j = 0; j < height; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
