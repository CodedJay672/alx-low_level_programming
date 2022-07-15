#include "main.h"

/**
 * print_last_digit - function that prints the last digit
 * @d: - integer parameter expected
 *
 * Return: always return value of last digit
 */

int print_last_digit(int d)
{
	int c = d % 10;

	if (c < 0)
		c *= -1;
	_putchar(c + '0');
	return (c);
}
