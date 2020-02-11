#include "holberton.h"
/**
 * jack_bauer -  prints every minute of the day of Jack Bauer
 *
 * Return: printed every minute of the day.
 */
void jack_bauer(void)
{
	int hours;
	int mins;
	int dhours;
	int uhours;
	int dmins;
	int umins;

	for (hours = 0; hours <= 23; hours++)
	{
		for (mins = 0; mins <= 59; mins++)
		{
			dhours = hours / 10;
			uhours = hours % 10;
			dmins = mins / 10;
			umins = mins % 10;
			_putchar(dhours + '0');
			_putchar(uhours + '0');
			_putchar(58);
			_putchar(dmins + '0');
			_putchar(umins + '0');
			_putchar('\n');
		}
	}
}
