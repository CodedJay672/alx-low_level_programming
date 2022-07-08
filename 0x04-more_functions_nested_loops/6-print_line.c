#include "main.h"

/**
 * print_line - prints lines in the terminal
 * @n: function arguement
 *
 * Return: always void
 */

void print_line(int n)
{
	int i = 0;

		if (n > 0)
		{
			while (i < n)
			{
				_putchar('_');
				i++;
			}
			_putchar('\n');
		}
		else
		{
			_putchar('\n');
		}
}
