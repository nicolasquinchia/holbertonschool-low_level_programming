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

	if (str == '\0')
		return ('\0');
	cont = 0;
	while (str[cont] == '\0')
	{
		cont++;
	}
	cont += 1;
	p = malloc(cont * sizeof(char));
	if (p == '\0')
		return ('\0');
	for (i = 0; i <= cont; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
