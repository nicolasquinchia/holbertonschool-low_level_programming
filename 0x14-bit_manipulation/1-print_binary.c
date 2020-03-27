#include "holberton.h"
/**
 * binary_convert - converts, binary to decimal and print it
 * @n: number to represent in binary
 *
 * Return: void
 */
void binary_convert(unsigned long int n)
{
	char bin;

	if (n == 0)
	{
		return;
	}
	binary_convert(n >> 1);
	bin = ((n & 1) + '0');
	_putchar(bin);
}
/**
 * print_binary -  print binary representation of a given number.
 * @n: number to represent in binary
 *
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		binary_convert(n);
	}
}
