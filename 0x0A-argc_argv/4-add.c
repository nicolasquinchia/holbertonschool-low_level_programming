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
	int rows, cols;
	int total;

	for (rows = 1; rows < argc; rows++)
	{
		for (cols = 0; argv[rows][cols] != '\0'; cols++)
		{
			if (argv[rows][cols] < '0' || argv[rows][cols] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		total = total + atoi(argv[rows]);
	}
	printf("%d\n", total);
	return (0);
}
