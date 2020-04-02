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
	unsigned long int temp = 0;

	i = 0;
	while (i < 98)
	{
		temp = num_a + num_b;
		num_a = num_b;
		num_b = temp;
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
