#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - function that prints the last digit
 * @d: - integer parameter expected
 *
 * Return: always return value of last digit
 */

int print_last_digit(int d)
{
	int c;

	c = _putchar((d % 10) + '0');
	return (c);
}
