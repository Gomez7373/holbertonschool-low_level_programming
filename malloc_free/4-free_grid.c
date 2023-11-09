#include <stdlib.h>

/**
 * free_grid - Frees the memory allocated for a 2D array.
 * @grid: The 2D array to be freed.
 * @height: The height of the array.
 */
void free_grid(int **grid, int height)
{
int i;
if (grid != NULL)
{
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
}

