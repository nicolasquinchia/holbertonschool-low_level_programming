#include <stdio.h>
/**
 * _strncat -  concatenates two strings.
 * @src: array with the string source
 * @dest: pointer where the text is append
 * @n: num of bytes to be append from src
 *
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int c_src;
	int c_dest;
	int i_src;
	int i_dest;

	for (c_dest = 0; dest[c_dest] != 0; c_dest++)
	for (c_src = 0; c_src < n && src[c_src] != 0; c_src++)
	i_src = 0;
	for (i_dest = c_dest; i_dest < (c_src + c_dest); i_dest++)
	{
		dest[i_dest] = src[i_src];
		i_src++;
	}
	dest[c_src + c_dest] = 0;
	return (dest);
}
