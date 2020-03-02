#include <stdio.h>
#include <stdlib.h>
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

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", n);
	return (0);
}
