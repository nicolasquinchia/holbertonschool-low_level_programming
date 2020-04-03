#include "holberton.h"
/**
 * print_number - prints an integer.
 * @n: number to print
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int i = n;
	unsigned int temp;
	unsigned int factor = 1;

	if (i == 0)
	{
		_putchar('0');
		return;
	}
	if (n < 0)
	{
		i = i * (-1);
		_putchar('-');
	}
	temp = i;
	while (temp != 0)
	{
		temp = temp / 10;
		factor = factor * 10;
	}
	while (factor > 1)
	{
		factor = factor / 10;
		_putchar((i / factor) + '0');
		i = i % factor;
	}
}
