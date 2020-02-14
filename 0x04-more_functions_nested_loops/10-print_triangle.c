#include "holberton.h"
/**
 * print_triangle -  function that prints a triangle
 * @size: variable to set the size of the triangle
 *
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
	int i, j;
	int top = size;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = top; j >= 1; j--)
			{
				if (i == j)
				{
					_putchar('#');
				}
				else if (j < i)
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
