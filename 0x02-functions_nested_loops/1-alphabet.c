#include"main.h"

/**
 * function - prints characters to stdout
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
