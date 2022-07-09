#include "main.h"

/**
 * more_numbers - prints numbers 0-14
 *
 * Return: Always return void
 */

void more_numbers(void)
{
	int a = 0;

	while (a < 10)
	{
		int b = 0;
		int c = 0;

		while (b <= 9)
		{
			_putchar(b + '0');
			b++;
		}
		while (c <= 4)
		{
			_putchar('1');
			_putchar(c + '0');
			c++;
		}
		_putchar('\n');
		a++;
	}
}
