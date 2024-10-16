#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * alloc_grid - creates a 2D array of integers
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer to the 2D array, or NULL if it fails
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
	for (j = 0; j < width; j++)
		grid[i][j] = 0;
	}

	return (grid);
}
