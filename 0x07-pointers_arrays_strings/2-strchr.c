#include "main.h"
#define NULL 0

/**
 * _strchr - function that locates a character in a string
 * @s: string to be searched
 * @c: character being searched for
 * Return: returns a pointer to the first occurence of c
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (s* == c)
		{
			return (s);
		}
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
