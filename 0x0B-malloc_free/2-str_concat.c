#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: The string #1 to concatenate.
 * @s2: The string #2 to concatenate
 *
 * Return: pointer with the address of the array created .
 */
char *str_concat(char *s1, char *s2)
{
	int i_s1, i_s2;
	char *p;
	int i, j, n;

	if (s1 == '\0')
		s1 = "";
	if (s2 == '\0')
		s2 = "";
	i_s1 = 0;
	while (s1[i_s1] != '\0')
		i_s1++;
	i_s2 = 0;
	while (s2[i_s2] != '\0')
		i_s2++;
	p = malloc(((i_s1 + i_s2) * sizeof(char)) + 1);
	if (p == '\0')
		return ('\0');
	for (i = 0; i < i_s1; i++)
	{
		p[i] = s1[i];
	}
	j = 0;
	for (n = i_s1; n <= (i_s1 + i_s2); n++)
	{
		p[n] = s2[j];
		j++;
	}
	return (p);
}
