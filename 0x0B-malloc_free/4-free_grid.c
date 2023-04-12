#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees the memory allocated for a 2D grid of integers
 *
 * @grid: Pointer to the grid to free
 * @height: The height of the grid
 */
void free_grid(int **grid, int height)
{
    int i;

    /* Check if grid is NULL or height is 0 */
    if (grid == NULL || height == 0)
    {
        /* Nothing to free, return */
        return;
    }

    /* Free memory allocated for each row of the grid */
    for (i = 0; i < height; i++)
    {
        free(grid[i]);
    }

    /* Free memory allocated for the grid itself */
    free(grid);
}
