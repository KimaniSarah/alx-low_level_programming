#include"main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 * @grid:the 2d array to be freed
 * @height:the rows in the grid
 *
 * Return:0
 */
void free_grid(int **grid, int height)
{
	int h;

	if (grid != NULL)
	{
		for (h = 0; h < height; h++)
		{
			free(grid[h]);
		}
		free(grid);
	}
}
