#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all -> prints anything passed as arguments
 * @format: string format (data types c, i, f, s)
 *
 */

void print_all(const char * const format, ...)
{
	int index;
	char *str;
	char *sep = ", ";
	va_list args;

	va_start(args, format);
	index = 0;
	while (format != NULL && *(format + index) != '\0')
	{
		switch (*(format + index))
		{
			case 's':
				str = va_arg(args, char *);
				str = (str != NULL) ? str : "(nil)";
				printf("%s", str);
				break;
			case 'i':
				printf("%i", va_arg(args, int));
				break;
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			default:
				index++;
				continue;
		}
		if (*(format + index++) != 0)
			printf("%s", sep);
		index++;
	}
	putchar('\n');
	va_end(args);
}
