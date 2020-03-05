#include <stdlib.h>
#include "holberton.h"
/**
 * malloc_checked - allocates memory using malloc.
 * @b: size of the space to malloc.
 *
 * Return: pointer with the address of the array created.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == '\0')
	{
		exit(98);
	}
	return (p);
}
