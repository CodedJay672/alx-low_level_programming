#include "main.h"

/**
 * print_square - prints a square shape
 * @size: function argument
 *
 * Return: always void
 */

void print_square(int size)
{
	if (size > 0)
	{
		int i = 1;

		while (i <= size)
		{
			int j = 1;

			while (j <= size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
