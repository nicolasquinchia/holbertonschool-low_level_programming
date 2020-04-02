#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	unsigned long int num_a = 1;
	unsigned long int num_b = 2;

	printf("%lu, %lu, ", num_a, num_b);
	i = 0;
	while (i < 48)
	{
		num_b = num_a + num_b;
		num_a = num_b;
		printf("%lu", num_b);
		if (i != 47)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	return (0);
}
