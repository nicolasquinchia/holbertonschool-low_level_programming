#include "holberton.h"
/**
 * _strcmp - compare two strings.
 * @s1: string 1
 * @s2: string 2
 *
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int res;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	res = s1[i] - s2[i];
	return (res);
}
