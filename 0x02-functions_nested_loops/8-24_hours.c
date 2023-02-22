#include <stdio.h>
/**
 *jack_bauer - prints every minute of the day
 */
void jac_bauer(void)
{
	int hour, minute;

	for (hour = o; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			putchar(hour / 10) + '0');
			putchar(hour % 10) + '0');
			putchar(':');
			putchar(minute / 10) + '0');
			putchar(minute % 10) + '0');
			putchar(\n);
		}
	}


