#include <stdio.h>
/**
 * _isupper - checks for uppercase character
 * @c: ascii code for the character to check
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
	int upc;

	if (c <= 90 && c >= 65)
	{
		upc = 1;
	}
	else
	{
		upc = 0;
	}
	return (upc);
}
