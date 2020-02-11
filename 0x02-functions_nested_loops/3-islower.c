#include "holberton.h"
/**
 * _islower - detect lowercase letters
 * @c: Ascii code of the letter to be check
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	int islow;

	if (c <= 122 && c >= 97)
	{
		islow = 1;
	}
	else
	{
		islow = 0;
	}
	return (islow);
}
