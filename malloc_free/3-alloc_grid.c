#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2D array of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: A pointer to the newly allocated 2D array, or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
    int **grid;
    int i, j;

    /* Check for invalid width or height */
    if (width <= 0 || height <= 0)
        return NULL;

    /* Allocate memory for the rows (height) */
    grid = (int **)malloc(height * sizeof(int *));
    
    /* Check if memory allocation was successful */
    if (grid == NULL)
        return NULL;

    /* Allocate memory for the columns (width) and initialize to 0 */
    for (i = 0; i < height; i++)
    {
        grid[i] = (int *)malloc(width * sizeof(int));

        /* Check if memory allocation was successful */
        if (grid[i] == NULL)
        {
            /* Free previously allocated memory in case of failure */
            for (j = 0; j < i; j++)
                free(grid[j]);
            
            free(grid);
            return NULL;
        }

        /* Initialize each element to 0 */
        for (j = 0; j < width; j++)
            grid[i][j] = 0;
    }

    return grid;
}

