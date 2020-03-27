#include "holberton.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: integer number to find the binary index.
 * @index: index of the binary to return.
 *
 * Return: -1 if it fails or value in the index position.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long tmp;

	if (index > (sizeof(n) * 8) - 1)
	{
		return (-1);
	}
	tmp = n >> index;
	return (tmp & 1);
}
