#include "holberton.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: size of av.
 * @av: array of strings.
 *
 * Return: pointer with the address of the array created.
 */
char *argstostr(int ac, char **av)
{
	int i, j, x, y, n = 0, m = 0;
	char *p;

	if (ac == 0 || av == '\0')
		return ('\0');
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			n++;
		}
	}
	p = malloc(sizeof(char) * (n + ac + 1));
	if (p == '\0')
		return ('\0');
	m = 0;
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			p[m] = av[x][y];
			m++;
		}
		p[m] = '\n';
		m++;
	}
	p[m] = '\0';
	return (p);
}
