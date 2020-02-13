#include "holberton.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: number of lines to draw
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	int init;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (init = 0; init <= n; init++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
