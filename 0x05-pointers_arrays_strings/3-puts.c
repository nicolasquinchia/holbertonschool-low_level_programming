#include "holberton.h"
/**
 * _puts - prints a string, followed by a new line.
 * @str: array with the characters of the word
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	int index;
	char letter = str[0];

	for (index = 0; letter != '\0';)
	{
		letter = str[index];
		_putchar(letter);
		index++;
	}
	_putchar('\n');
}
