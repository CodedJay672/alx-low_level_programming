#include "main.h"

/**
 * print_alphabet_x10 - wrirtes the alphabets ten times to stdout
 *
 * @c - character to write
 */

void print_alphabet_x10(void)
{

	for (int i = 0; i < 10; i++)
	{
		int c = 97;

		while (c <= 122)
		{
			_putchar(c);
			c++;
		}
		_putchar(10);
	}
}
