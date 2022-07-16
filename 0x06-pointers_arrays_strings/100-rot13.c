#include "main.h"

/**
 * rot13 -function that encodes using rot13
 * @s: funct argument
 * Return: pointer to encoded string
 */

char *rot13(char *s)
{
	char *i;
	char shift;

	i = s;
	while (*i)
	{
		shift = 'A' + (*i & 32);
		if (('a' <= *i && *i <= 'z') || ('A' <= *i && *i <= 'Z'))
			*i = (*i - shift + 13) % 26 + shift;
		i++;
	}
	return (s);
}
