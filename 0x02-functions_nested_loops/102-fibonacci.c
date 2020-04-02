#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	unsigned long int num_a = 0;
	unsigned long int num_b = 1;

	i = 0;
	while (i < 50)
	{
		num_b = num_a + num_b;
		num_a = num_b;
		printf("%lu", num_b);
		if (i != 49)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	return (0);
}
