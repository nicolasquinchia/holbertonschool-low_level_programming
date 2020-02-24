#include "holberton.h"
/**
 * _memcpy -  fills the first n bytes of the memory area.
 * @dest: pointer with the dest to copy
 * @src: pointer that have the source to copy
 * @n: bytes to be copied
 *
 * Return: Always 0.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
	}
	return (dest);
}
