#include "holberton.h"
/**
 * _strchr -  locates a character in a string.
 * @s: pointer with the location of the string
 * @c: character to find in the string
 *
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			break;
		}
	}
	return (s + i);
}
