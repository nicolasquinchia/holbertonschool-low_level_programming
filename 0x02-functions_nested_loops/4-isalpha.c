# include "holberton.h"
/**
 * _isalpha - Funtion to detect the alphabetic characters
 * @c: Variable in ascii to be check
 *
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	int isletter;

	if ((c <= 122 && c >= 97) || (c <= 90 && c >= 65))
	{
		isletter = 1;
	}
	else
	{
		isletter = 0;
	}
	return (isletter);
}
