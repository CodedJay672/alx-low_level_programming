#include "main.h"

/**
 * print_most_numbers - prints numbers 1-9
 *
 * Return: always void
 */

void print_most_numbers(void)
{
	int a = 48;

	while (a <= 57)
	{
		if (a == 50 || a == 52)
		{
			a++;
		}
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
