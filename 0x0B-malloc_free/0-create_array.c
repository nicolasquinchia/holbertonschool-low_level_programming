#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - create an array of chars, and initializes with specific char.
 * @c: The character to print
 * @size: The size of the array to create
 *
 * Return: pointer with the address of the array created .
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return ('\0');
	p = malloc(size * sizeof(char));
	if (p == '\0')
		return ('\0');
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
