#include "main.h"

/**
 * jack_bauer - writes every minute for 24 hours
 *
 * Return: - returns 0 (success)
 */

void jack_bauer(void)
{
	int hr, min;

	hr = 0;
	while (hr <= 23)
	{
		min = 0;
		while (min < 59)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
			min++;
		}
		hr++;
	}
}
