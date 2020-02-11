#include "holberton.h"
/**
 * print_sign - prints the sign of a number
 * @n: int to check the sign
 *
 * Return: Always 0.
 */
int print_sign(int n)
{
	int sign;

	if (n > 0)
	{
		sign = 1;
		_putchar('+');
	}
	else if (n < 0)
	{
		sign = -1;
		_putchar('-');
	}
	else
	{
		sign = 0;
		_putchar('0');
	}
	return (sign);
}
