#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number
 * @num: number to extract the last digit
 *
 * Return: last digit and prints it.
 */
int print_last_digit(int num)
{
	int lastd;
	int rtnd;

	lastd = num % 10;
	if (lastd > 0)
	{
		rtnd = lastd;
		_putchar(rtnd + '0');
	}
	else if (lastd == 0)
	{
		rtnd = lastd;
		_putchar(rtnd + '0');
	}
	else
	{
		rtnd = lastd * (-1);
		_putchar(rtnd + '0');
	}
	return (rtnd);
}

