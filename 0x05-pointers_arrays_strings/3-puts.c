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
	char letter;

	for (index = 0; str[index] != 0;)
	{
		letter = str[index];
		_putchar(letter);
		index++;
	}
	_putchar('\n');
}
