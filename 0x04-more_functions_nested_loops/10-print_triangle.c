#include "main.h"

/**
 * print_triangle - prints a triangle on the screen
 * @size: size of the triangle
 *
 * Return: Always void
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		int i = 1;
		
		while (i <= size)
		{
			int j = size;
			int k = size - i;
			int l;

			while (k != 0)
			{
				_putchar(' ');
				k--;
			}
			l = j - i;
			while (l < size)
			{
				_putchar('#');
				l++;
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
