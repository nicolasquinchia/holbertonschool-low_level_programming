#include "holberton.h"
/**
  * print_most_numbers - print numbers 0 - 9 less 2 4
  *
  * Return: Always 0.
  */
void print_most_numbers(void)
{
	int nums;

	for (nums = 0; nums <= 9; nums++)
	{
		if (nums != 2 && nums != 4)
		{
			_putchar(nums + '0');
		}
	}
	_putchar('\n');
}
