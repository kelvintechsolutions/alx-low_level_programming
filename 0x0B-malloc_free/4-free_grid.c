#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid -it is a fuction that frees a 2-dimensional grideed
 * previously created by your (alloc_grid function).
 * @grid:it is a  double poiter to the grind.
 * @height:it is the  height of the grind.
 * Return:it is an  address of the newly allocated memoy.
 */

void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
	{
		free(grid[h]);
	}
	free(grid);
}
