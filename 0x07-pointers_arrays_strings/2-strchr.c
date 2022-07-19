#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: string to be searched
 * @c: character being searched for
 * Return: returns a pointer to the first occurence of c
 */

char *_strchr(char *s, char c)
{
	unsigned int a = 0, b;

	while (s[a] != '\0')
		a++;
	b = 0;
	while (b < a)
	{
		if (s[b] == c)
		{
			s += b;
			return (s);
		}
		b++;
	}
	return ('\0');
}
