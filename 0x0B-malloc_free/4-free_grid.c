#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid
 * @grid:pointer to the 2 dimensional pointer
 * @height: rows on the 2 dimensional array
 *
 * Return:nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == 0 || grid == NULL)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
