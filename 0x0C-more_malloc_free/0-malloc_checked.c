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
	if (malloc(b) == '\0')
	{
		exit(98);
	}
	return (malloc(b));
}
