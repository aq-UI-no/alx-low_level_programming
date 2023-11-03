#include <stdlib.h>
#include "main.h"
/**
*alloc_grid - returns pointer to a 2-d array of integers
*@width: width of the rows
*@height: height of the rows
*
*Return: grid if successfull, NULL if failed
*/
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;

if (width <= 0 || height <= 0)/*checks for invalid dimenion*/
{
return (NULL);
}
grid = (int **)malloc(height * sizeof(int *));

if (grid == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
grid[i] = (int *)malloc(width * sizeof(int));

if (grid[i] == NULL)
{
for (j = 0; j < i; j++)
{
free(grid[j]);
{
free(grid);
return (NULL);
}
}
for (j = 0; j < width; j++)
{
grid[i][j] = 0;
}
}
}
return (grid);
}
