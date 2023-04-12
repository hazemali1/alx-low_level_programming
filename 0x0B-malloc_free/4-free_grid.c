#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Free
 *
 * @grid: Parameter1
 * @height: Parameter2
*/
void free_grid(int **grid, int height)
{
	int d;

	for (d = 0; d < height; d++)
	{
		free(grid[d]);
	}
	free(grid);
}
