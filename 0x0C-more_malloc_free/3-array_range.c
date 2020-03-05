#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: integer where the array star with
 * @max: integer where the array ends
 *
 * Return: pointer with the address of the array created .
 */
int *array_range(int min, int max)
{
	int range, i;
	int *p;

	if (min > max)
		return ('\0');
	range = max - min;
	range += 1;
	p = malloc(range * sizeof(int));
	if (p == '\0')
		return ('\0');
	for (i = 0; i < range; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
