#include "holberton.h"
/**
 * swap_int - swaps the values of two integers
 * @a: path of the integer a
 * @b: path of the integer b
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp_a;
	int temp_b;

	temp_a = *a;
	temp_b = *b;
	*a = temp_b;
	*b = temp_a;
}
