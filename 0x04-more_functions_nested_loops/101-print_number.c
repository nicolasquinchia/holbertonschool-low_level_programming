#include "holberton.h"
/**
 * print_number - prints an integer.
 * @n: number to print
 *
 * Return: void
 */
void print_number(int n)
{
	int temp;
	int factor = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n < 0)
	{
		n = n * (-1);
		_putchar('-');
	}
	temp = n;
	while (temp != 0)
	{
		temp = temp / 10;
		factor = factor * 10;
	}
	while (factor > 1)
	{
		factor = factor / 10;
		_putchar((n / factor) + '0');
		n = n % factor;
	}
}
