#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - prints all num from n to 98
 * @n: initial number
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int x;

	if (n > 98)
	{
		for (x = n; x >= 98; x--)
		{
			if (x == 98)
			printf("%d", x);
			else
			printf("%d, ", x);
		}
		putchar('\n');
	}
	else if (n < 98)
	{
		for (x = n; x <= 98; x++)
		{
			if (x == 98)
			printf("%d", x);
			else
			printf("%d, ", x);
		}
		putchar('\n');
	}
	else
	{
		printf("%d\n", n);
	}
}
