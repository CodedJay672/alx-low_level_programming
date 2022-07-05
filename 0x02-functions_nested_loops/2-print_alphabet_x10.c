#include "main.h"

/**
 * print_alphabet_x10 - wrirtes the alphabets ten times to stdout
 *
 * @c - character to write
 */

void print_alphabet_x10(void)
{
	int a = 0;

	while (a < 10)
	{
		int c = 97;

		while (c <= 122)
		{
			_putchar(c);
			c++;
		}
		_putchar(10);
		a++;
	}
}
