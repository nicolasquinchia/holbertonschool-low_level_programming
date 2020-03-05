#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: The string #1 to concatenate.
 * @s2: The string #2 to concatenate.
 * @n: bytes to add from s2
 *
 * Return: pointer with the address of the array created .
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, x, y;
	char *p;

	if (s1 == '\0')
		s1 = "";
	if (s2 == '\0')
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
		i++;
	j = 0;
	while (s2[j] != '\0')
		j++;
	if (n > j)
		n = j;
	p = malloc(sizeof(char) * (i + n + 1));
	if (p == '\0')
		return ('\0');
	for (x = 0; x < i; x++)
		p[x] = s1[x];
	j = 0;
	for (y = x; y < (i + n); y++)
	{
		p[y] = s2[j];
		j++;
	}
	p[y] = '\0';
	return (p);
}
