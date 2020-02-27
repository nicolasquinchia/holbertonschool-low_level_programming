#include "holberton.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer that have the address of the string
 *
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		i++;
	}
	else
	{
		return;
	}
	_print_rev_recursion(&s[i]);
	i = i - 1;
	_putchar(s[i]);
}
