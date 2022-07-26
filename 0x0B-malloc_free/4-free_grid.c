#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * free_grid - removing memory allocate
 * @grid: grid to be freed
 * @height: heigth of matrix
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i];
	free(grid);
}
