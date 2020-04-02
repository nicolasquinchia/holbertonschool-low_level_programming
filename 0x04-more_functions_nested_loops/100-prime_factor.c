#include <stdio.h>
/**
 * main -  prints the largest prime factor of the number 612852475143.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int n = 612852475143;
	unsigned long int div = 2, maxfact;

	while (n != 0)
	{
		if ((n % div) != 0)
		{
			div = div + 1;
		}
		else
		{
			maxfact = n;
			n = n / div;
			if (n == 1)
			{
				printf("%lu\n", maxfact);
				return (0);
			}
		}
	}
	return (0);
}
