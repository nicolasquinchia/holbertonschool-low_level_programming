#include "holberton.h"
/**
 * puts2 - prints every other character of a string
 * @str: array with the characters
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i;
	int index;
	int cont;
	int mod;

	for (i = 0; str[i] != 0; i++)
	{
	}
	index = i - 1;
	for (cont = 0; cont <= index; cont++)
	{
		mod = cont % 2;
		if (mod == 0)
		{
			_putchar(str[cont]);
		}
	}
	_putchar('\n');
}
