#include <stdlib.h>
/**
 * alloc_grind - Allocate a 2D array of intergers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: Apointer to the newly allocated 2D array, or NULL on failure. 
 */
int **alloc_grid(int widrh, int height)
{
int **grid;
int i, j;
if (widrh <= 0 || height <= 0)
	return (NULL);

grid = (int **)malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)

grid[i] = (int *)malloc(widrh * sizeof (int));

	if (grid[i] == NULL)
	{
	for (j = 0; j < i; j++)

		free(grid[j]);
	return (NULL);
}
for (j = 0; j < widrh; j++)
{
grid[i][j] = 0;
}

return (grid);

}
