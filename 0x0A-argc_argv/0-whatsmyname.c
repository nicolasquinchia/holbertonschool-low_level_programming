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

	n = argc - 1;
	printf("%s\n", argv[n]);
	return (0);
}
