#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid previously created.
 * @grid: bidimensional array.
 * @height: height array.
 *
 * Return: pointer with the address of the array created.
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
	{
		free(grid[index]);
	}
	free(grid);
}
