#include "holberton.h"
#include <stdio.h>
/**
 * print_rev - returns the length of a string.
 * @s: array with the characters of the word
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i;
	int index;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	index = i - 1;
	for (; index >= 0; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}
