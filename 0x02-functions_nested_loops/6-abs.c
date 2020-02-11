#include "holberton.h"
/**
 * _abs - computes the absolute value of an integer
 * @num: number to return in absolute value
 *
 * Return: absl.
 */
int _abs(int num)
{
	int absl;

	if (num < 0)
	{
		absl = num * (-1);
	}
	else if (num == 0)
	{
		absl = num;
	}
	else
	{
		absl = num;
	}
	return (absl);
}
