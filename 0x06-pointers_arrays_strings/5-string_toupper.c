#include "main.h"

/**
 * string_toupper - changes lowercase to uppercase
 * @a: function argument
 * Return: pointer to changed string
 */

char *string_toupper(char *a)
{
	char *b;
	
	b = a;
	while (*b)
	{
		if ('a' <= *b && *b <= 'z')
			*b -= 'a' - 'A';
		++b;
	}
	return (a);
}
