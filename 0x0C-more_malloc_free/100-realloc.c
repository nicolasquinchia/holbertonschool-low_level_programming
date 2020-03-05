#include "holberton.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block.
 * @ptr: pointer to the memory previously allocated
 * @old_size: size, in bytes, of the allocated space for ptr.
 * @new_size: new size, in bytes of the new memory block.
 *
 * Return: pointer with the address of the array created .
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *op, *np;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != '\0')
	{
		free(ptr);
		return ('\0');
	}
	if (ptr == '\0')
	{
		np = malloc(new_size);
		return (np);
	}
	op = ptr;
	if (new_size < old_size)
	{
		np = malloc(new_size);
		for (i = 0; i < new_size; i++)
			np[i] = op[i];
	}
	if (new_size > old_size)
	{
		np = malloc(new_size);
		for (i = 0; i < old_size; i++)
			np[i] = op[i];
	}
	free(ptr);
	return (np);
}
