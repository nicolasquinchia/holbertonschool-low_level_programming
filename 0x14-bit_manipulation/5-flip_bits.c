#include "holberton.h"
/**
 * flip_bits - rtn #'s of bits you need to flip to get from one number to other
 * @n: integer 1
 * @m: integer 2
 *
 * Return: number of bits to get another number.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int tmp;
	unsigned int bits;

	tmp = n ^ m;
	bits = 0;
	while (tmp != 0)
	{
		if ((tmp & 1) == 1)
		{
			bits++;
		}
		tmp = tmp >> 1;
	}
	return (bits);
}
