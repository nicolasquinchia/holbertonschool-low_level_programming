#include <holberton.h>
/**
 * _isdigit - checks for a digit
 * @c: ascii code from number
 *
 * Return: Always 0.
 */
int _isdigit(int c)
{
	int isd

	if (c <= 57 && c >= 48)
	{
		isd = 1;
	}
	else
	{
		isd = 0;
	}
	return (isd);
}
