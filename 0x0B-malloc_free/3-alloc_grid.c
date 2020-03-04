#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the array space
 * @height: height of the array space
 *
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i, j, n;

	if (width <= 0 || height <= 0)
		return ('\0');
	p = malloc(sizeof(int *) + height);
	if (p == '\0')
		return ('\0');
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
		if (p[i] == '\0')
		{
			for (j = 0; j < height; j++)
			{
				free(p[i]);
			}
			free(p);
			return ('\0');
		}
		for (n = 0; n < width; n++)
		{
			p[i][n] = 0;
		}
	}
	return (p);
}
