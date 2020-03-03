#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a new string which is a duplicate of the str
 * @str: The string to duplicate.
 *
 * Return: pointer with the address of the array created .
 */
char *_strdup(char *str)
{
	char *p;
	int cont;
	int i;

	cont = 0;
	while (str[cont])
	{
		cont++;
	}
	p = malloc(cont * sizeof(char));
	if (p == '\0')
		return ('\0');
	for (i = 0; i < cont; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
