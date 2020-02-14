#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int cont;
	int mod_3, mod_5;

	for (cont = 1; cont <= 100; cont++)
	{
		if (cont < 100)
		{
			mod_3 = cont % 3;
			mod_5 = cont % 5;
			if (mod_3 == 0 && mod_5 == 0)
			{
				printf("FizzBuzz ");
			}
			else if (mod_3 == 0)
			{
				printf("Fizz ");
			}
			else if (mod_5 == 0)
			{
				printf("Buzz ");
			}
			else
			{
				printf("%d ", cont);
			}
		}
		else
			printf("Buzz");
	}
	putchar('\n');
	return (0);
}
