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
		int b = 48;
		while (b <= 57)
		{
			_putchar(b);
			b++;
		}
		_putchar('\n');
		a++;
	}
}
