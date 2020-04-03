#include "holberton.h"
/**
  * _atoi - function that convert a string to an integer
  * @s: Holds the string
  * Return: returns the value of the integer
  */
int _atoi(char *s)
{
	int i;
	int sign = 1;
	int num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			sign = sign * (-1);
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + (s[i] - '0');
			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				return (num * sign);
			}
		}
	}
	return (0);
}
