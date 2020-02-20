#include "holberton.h"
/**
 * _strncpy -  concatenates two strings.
 * @src: array with the string source
 * @dest: pointer where the text is append
 * @n: num of bytes to be append from src
 *
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int cont_d = 0;
	int cont_s = 0;
	int i;

	while (dest[cont_d] != '\0')
	{
		cont_d++;
	}
	while (src[cont_s] != '\0' && cont_s < (n - 1))
	{
		cont_s++;
	}
	for (i = 0 ; i < cont_d + cont_s; i++)
	{
		if (i <= cont_s)
		{
			dest[i] = src[i];
		}
		else
		{
			dest[i] = dest[i];
		}
	}
	dest[cont_d + cont_s] = '\0';
	return (dest);
}
