#include "main.h"

/**
 * more_numbers - prints numbers 0-14
 *
 * Return: Always return void
 */

void more_numbers(void)
{
	int a = 0;
	int j;

	while (a <= 10)
	{
		j = 0;
		while (j <= 14)
		{
			if (j >= 10)
				_putchar('1');
			_putchar(j % 10 + '0');
			j++;
		}
		_putchar('\n');
		a++;
	}
}
