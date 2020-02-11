#include "holberton.h"
/**
 * 2-print_alphabet_x10 - function that prints 10 times
 * alphabet, in lowercase, followed by a new line.
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char x;
	int n;

	for (n = 0; n <= 9; n++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
