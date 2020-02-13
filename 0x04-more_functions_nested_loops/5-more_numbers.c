#include "holberton.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int times;
	int count;
	int dec;
	int und;

	for (times = 0; times <= 9; times++)
	{
		for (count = 0; count <= 14; count++)
		{
			dec = count / 10;
			und = count % 10;
			if (count > 9)
			{
				_putchar(dec + '0');
			}
			_putchar(und + '0');
		}
		_putchar('\n');
	}
}
