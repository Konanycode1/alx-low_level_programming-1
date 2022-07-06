#include "main.h"
/**
 *jack_bauer - function print every minute of jack bauer.
 *
 *Return: 0.
 */

void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;
	int hours_remaider;
	int mins_remaider;

	while (hours <= 23)
	{
		while (minutes <= 59)
		{
			mins_remaider = minutes % 10;
			hours_remaider = hours % 10;
			_putchar(hours / 10 + '0');
			_putchar(hours_remaider + '0');
			_putchar(':');
			_putchar(monutes / 10 + '0');
			_putchar(mins_remaider + '0');
			minutes++;
			_putchar('\n');

		}
		hours++;
		minutes = 0;
	}
}
