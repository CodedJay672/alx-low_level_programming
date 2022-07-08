#include "main.h"

/**
 * print_diagonal - function that prints diagonal lines
 * @n: function arguments
 *
 * Return: always void
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int a = 1;

		_putchar('\\');
		_putchar('\n');
		while (a < n)
		{
			int b = n - a;

			while (b != n)
			{
				_putchar(' ');
				b++;
			}
			_putchar('\\');
			_putchar('\n');
			a++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
