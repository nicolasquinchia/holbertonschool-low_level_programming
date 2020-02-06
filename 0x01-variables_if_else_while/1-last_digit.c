#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastdigit;
	char sent[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;
	if (lastdigit > 5)
	printf("%s %d is %d and is greater than 5\n", sent, n, lastdigit);
	else if (lastdigit == 0)
	printf("%s %d is %d and is 0\n", sent, n, lastdigit);
	else
	printf("%s %d is %d and is less than 6 and not 0\n", sent, n, lastdigit);
	return (0);
}
