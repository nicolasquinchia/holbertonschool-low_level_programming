#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of strings passed to the function
 *
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list lc;
	unsigned int i;
	char *p;

	va_start(lc, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(lc, char *);
		if (p == '\0')
		{
			printf("(nil)");
		}
		printf("%s", p);
		if (i != (n - 1) && separator != '\0')
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(lc);
}
