#include "main.h"

/**
 * _strlen - finds the length of the string
 * print_rev - prints strings in reverse
 * @s: string to print
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int a = 0;

	while (*s)
	{
		a = a + 1;
		s++;
	}
	a = a - 1;
	while (a >= 0)
	{
		_putchar(s[a]);
		s--;
	}
	_putchar('\n');
}
