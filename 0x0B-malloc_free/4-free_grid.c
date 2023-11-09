#include "main.h"
#include <stdlib.h>

/**
 * free_grid - This frees a 2-dimensional array of integers.
 * @grid: This is the 2-dimensional array of integers to be freed.
 * @height: This is the height of grid.
 */

void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}
