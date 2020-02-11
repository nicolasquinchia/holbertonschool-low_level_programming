#include "holberton.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int y, x, mult, dmult, umult;

	for (y = 0; y <= 9; y++)
	{
		for (x = 0; x <= 9; x++)
		{
			mult = y * x;
			dmult = mult / 10;
			umult = mult % 10;
			if (x < 1)
			_putchar(umult + '0');
			else
			{
				if (mult <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(umult + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(dmult + '0');
					_putchar(umult + '0');
				}
			}
		}
		_putchar('\n');
	}
}
