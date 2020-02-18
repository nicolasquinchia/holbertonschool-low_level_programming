#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *str;
	int len;
	char letter;

	str = "Monica";
	letter = str[6];
	len = _strlen(str);
	printf("%d\n", len);
	putchar(letter);
	putchar('\n');
	return (0);
}
