#include "holberton.h"
/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: pointer with the address of the string
 *
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	int i = 0;
	
	_putchar(s[i]);
	i++;
	if (s[i] != '\0')
	{
		_puts_recursion(&s[i]);
	}
	else
	{
		_putchar('\n');
	}
}
