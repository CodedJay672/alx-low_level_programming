#include "main.h"

/**
 * print_sign - prints the sign of the given argument
 * @n - argument to check for signs
 *
 * Return: returns 0 if n is 0, returns 1 if n is positive and returns -1 if n is less than zero
 */

int print_sign(int n)
{
	int a;

	if (n > 0)
	{
		a = 1;
		_putchar('+');
	}
	else if (n < 0)
	{
		a = -1;
		_putchar('-');
	}
	else
	{
		a = 0;
		_putchar('0');
	}
	return (a);
}

