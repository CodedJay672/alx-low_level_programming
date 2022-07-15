#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: firts argument
 * @s2: second argument
 * Return: Returns an integer value
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		++s1;
		++s2;
	}
	if (*s1)
		return (1);
	if (*s2)
		return (-1);
	return (0);
}
