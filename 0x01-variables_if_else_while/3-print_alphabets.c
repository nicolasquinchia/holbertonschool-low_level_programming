#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;
	char y;

	x = 'a';
	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	y = 'A';
	while (y <= 'Z')
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
