#include <stdio.h>
/**
 * main - prints its name, followed by a new line.
 * @argc: The number of command line arguments, the size of argv
 * @argv: Array containing the program command line arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int n;

	n = 0;
	while (n < argc)
	{
		printf("%s\n", argv[n]);
		n++;
	}
	return (0);
}
