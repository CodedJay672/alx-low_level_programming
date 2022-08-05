#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings -> prints strings passed as param
 * @separator: separator string
 * @n: number of strings passed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	i = 0;
	va_start(args, n);
	while (i < n)
	{
		if (separator == NULL)
		{
			printf("%s", va_arg(args, char *));
		}
		else
		{
			printf("%s", va_arg(args, char *));
			if (i == (n - 1))
				break;
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
