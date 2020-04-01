#include "holberton.h"
/**
 * coma_space - print coma with n spaces
 * @i: number spaces to print
 *
 * Return: void.
 */
void coma_space(int i)
{
	int n;

	if (i < 0)
	{
		return;
	}
	_putchar(',');
	for (n = 0; n < i; n++)
	{
		_putchar(' ');
	}
}
/**
 * print_times_table -  prints the n times table, starting with 0.
 * @n: times to print the table.
 *
 * Return: void.
 */
void print_times_table(int n)
{
	int i, j;
	int mult = 0;

	if (n >	15 || n < 0)
	{
		return;
	}
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j > 0)
			{
				mult = i * j;
				if (mult < 10)
				{
					coma_space(3);
					_putchar(mult + '0');
				}
				else if (mult < 100)
				{
					coma_space(2);
					_putchar((mult / 10) + '0');
					_putchar((mult % 10) + '0');
				}
				else
				{
					coma_space(1);
					_putchar((mult / 100) + '0');
					_putchar(((mult / 10) % 10) + '0');
					_putchar((mult % 10) + '0');
				}
			}
			else
			{
				_putchar('0');
			}
		}
		_putchar('\n');
	}
}
