#include "holberton.h"
/**
 * _strchr -  locates a character in a string.
 * @s: pointer with the location of the string
 * @c: character to find in the string
 *
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int lenght;
	int i;
	int j;

	lenght = 0;
	while (s[lenght] != '\0')
	{
		lenght++;
	}
	for (i = 0; i <= lenght; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			else if (s[i] == '\0')
			{
				s = 0;
			}
		}
	}
	return (s);
}
