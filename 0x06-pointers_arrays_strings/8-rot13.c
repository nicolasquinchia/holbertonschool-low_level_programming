#include "holberton.h"
/**
 * rot13 - encodes a string into 1337..
 * @s: string to encode
 *
 * Return: Always 0.
 */
char *rot13(char *s)
{
	int i;
	int j;
	char alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char cod[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == alph[j])
			{
				s[i] = cod[j];
			}
		}
	}
	return (s);
}
