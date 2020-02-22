#include "holberton.h"
/**
 * cap_string - capitalizes all words of a string..
 * @s: string to capitalize
 *
 * Return: Always 0.
 */
char *cap_string(char *s)
{
	int i;
	int j;
	char s2[] = {' ', 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			if (s[i] == '\t')
			{
				s[i] = ' ';
			}
			if (s[i] == s2[j] && s[i + 1] <= 'z' && s[i + 1] >= 'a')
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
	}
	return (s);
}
