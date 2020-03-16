#include <stdarg.h>
#include<stdio.h>
#include "variadic_functions.h"
/**
 * print_ch - print a character
 * @ls_args: list of paramethers
 *
 * Return: void
 */
void print_ch(va_list ls_args)
{
	printf("%c", va_arg(ls_args, int));
}
/**
 * print_int - print a int
 * @ls_args: list of paramethers
 *
 * Return: void
 */
void print_int(va_list ls_args)
{
	printf("%d", va_arg(ls_args, int));
}
/**
 * print_st- print a string
 * @ls_args: list of paramethers
 *
 * Return: void
 */
void print_st(va_list ls_args)
{
	char *st;

	st = va_arg(ls_args, char*);
	if (st == '\0')
		st = "(nil)";
	printf("%s", st);
}
/**
 * print_flt- print a float
 * @ls_args: list of paramethers
 *
 * Return: void
 */
void print_flt(va_list ls_args)
{
	printf("%f", va_arg(ls_args, double));
}
/**
 *print_all - prints anything.
 *@format: list of arguments passed to the function
 *
 * Return: Always 0 (Success)
 */
void print_all(const char * const format, ...)
{
	in_format arr_st_fm[] = {
		{"c", print_ch},
		{"i", print_int},
		{"s", print_st},
		{"f", print_flt},
		{NULL, NULL}
	};
	int a, b;
	va_list ls_args;
	char *empty = "";
	char *separator = ", ";

	va_start(ls_args, format);
	a = 0;
	while (format != '\0' && format[a] != '\0')
	{
		b = 0;
		while (arr_st_fm[b].n != '\0')
		{
			if (format[a] == arr_st_fm[b].n[0])
			{
				printf("%s", empty);
				arr_st_fm[b].func(ls_args);
				empty = separator;
			}
			b++;
		}
		a++;
	}
	va_end(ls_args);
	printf("\n");
}
