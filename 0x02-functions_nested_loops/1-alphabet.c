#include"main.h"

/**
 * print_alphabet - writes character values to stdout
 *
 * @c - character to write
 */

void print_alphabet(void)
{
	int c = 97;

	while (c <= 122)
	{
		_putchar(c);
		c++;
	}

	_putchar(10);
}
