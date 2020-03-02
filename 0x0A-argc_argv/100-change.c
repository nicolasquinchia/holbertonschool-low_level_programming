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
	int n, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	coins = 0;
	while (n > 0)
	{
		if (n >= 25)
			n = n - 25;
		else if (n >= 10)
			n = n - 10;
		else if (n >= 5)
			n = n - 5;
		else if (n >= 2)
			n = n - 2;
		else
			n = n - 1;
		coins++;
	}
	printf("%d\n", coins);
	return (0);
}
