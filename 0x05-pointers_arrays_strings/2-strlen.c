#include "holberton.h"
/**
 * _strlen - returns the length of a string.
 * @s: array with the characters of the word
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int num;
	int index;
	char letter = s[0];

	for (index = 0; letter != '\0';)
	{
		index++;
		letter = s[index];
		num = num + 1;
	}
	return (num);
}
