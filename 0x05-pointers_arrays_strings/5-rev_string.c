#include "holberton.h"
/**
 * rev_string - returns the length of a string.
 * @s: array with the characters of the word
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i;
	int index_b;
	int index_a;
	char temp;

	for (i = 0; s[i] != 0; i++)
	{
	}
	index_b = i - 1;
	for (index_a = 0; index_a < index_b; index_a++)
	{
		temp = s[index_a];
		s[index_a] = s[index_b];
		s[index_b] = temp;
		index_b--;
	}
}
