#include "holberton.h"
#include <stdio.h>
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of diags to print
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i;
	int limit = n;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (; n > 0 ; n--)
		{
			for (i = 0; i < limit - n; i++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
