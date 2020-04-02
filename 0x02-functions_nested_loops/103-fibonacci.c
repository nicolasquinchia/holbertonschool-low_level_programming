#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int sum = 0;
	unsigned long int p_num = 1;
	unsigned long int c_num = 2;
	unsigned long int temp = 0;

	while (c_num <= 4000000)
	{
		if ((c_num % 2) == 0)
		{
			sum = sum + c_num;
		}
		temp = c_num;
		c_num = c_num + p_num;
		p_num = temp;

	}
	printf("%lu\n", sum);
	return (0);
}
