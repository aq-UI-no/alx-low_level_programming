#include <stdlib.h>
#include "main.h"
/**
* free_grid - frees 2d grid
*@grid: array
*@height: height of the 2d rows
*
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
