#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers -< prints numbers given as parameters
 * @seoerator: seperator string
 * @n: number of arguments
 * Return: alwaus 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	i = 0;
	while (i < n)
	{
		printf("%d, %s\n", va_arg(args, int), separator);
		i++;
	}
	va_end(args);
}
