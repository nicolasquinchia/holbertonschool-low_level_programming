#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array.
 * @nmemb: Number of data members(spaces) in the memory.
 * @size: size of each data space required.
 *
 * Return: pointer with the address of the array created .
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb <= 0 || size <= 0)
		return ('\0');
	p = malloc(nmemb * size);
	if (p == '\0')
		return ('\0');
	for (i = 0; i < (nmemb * size); i++)
	{
		p[i] = 0;
	}
	return (p);
}
