#include "main.h"

/**
 * print_sign - prints the sign of the given argument
 * @n: - integer argument for function
 *
 * Return: returns a integer if arguments are positive, negative or zero
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

