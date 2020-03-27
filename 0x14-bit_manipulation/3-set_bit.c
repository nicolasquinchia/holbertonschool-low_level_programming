#include "holberton.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: address of the integer base 10..
 * @index: index to set the bit.

 * Return: -1 if it fails or 1 if the function set the bit.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int mult = 1;

	if (index > (sizeof(*n) * 8) - 1)
	{
		return (-1);
	}
	mult = mult << index;
	*n = (*n | mult);
	return (1);

}
