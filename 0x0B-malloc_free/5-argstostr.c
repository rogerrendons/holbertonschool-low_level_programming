#include <stdlib.h>
/**
 * free_grid - free bidimentional
 * @grid: bidimentional matrix
 * @height: input value int
 * Return: int
*/

void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
