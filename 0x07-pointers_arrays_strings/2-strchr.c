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

	i = 0;
	while (s[i] != c)
	{
		i++;
	}
	if (s[i] == c)
	{
		return (s + i);
	}
	else
	{
		return (0);
	}
}
