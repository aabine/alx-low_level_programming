#include "main.h"
#include <stdlib.h> /* Needed for malloc() and free() */

/**
 * alloc_grid - Allocates memory for a 2D grid of integers
 *
 * @width: The width of the grid
 * @height: The height of the grid
 *
 * Return: If width or height is <= 0 or if memory allocation fails,
 * returns NULL.
 * Otherwise, returns a pointer to the allocated 2D grid.
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	/* Check for invalid width or height */
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	/* Allocate memory for the grid */
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}

	/* Allocate memory for each row of the grid */
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			/* Free previously allocated memory if current allocation fails */
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
	}

	return (grid);
}
