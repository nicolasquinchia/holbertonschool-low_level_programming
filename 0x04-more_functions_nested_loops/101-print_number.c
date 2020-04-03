#include "holberton.h"
/**
 * print_number - prints an integer.
 * @n: number to print
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int temp;

	if (n < 0)
	{
		_putchar('-');
		n = n * (-1);
	}
	temp = n;
	if ((temp / 10) > 0)
	{
		print_number(temp / 10);
	}
	_putchar((temp % 10) + '0');
}
