#include "main.h"

/**
 * _strlen - checks the length of a string
 * @s: string to be checked
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i;

	while (*s != 0)
	{
		i = i + 1;
		s++;
	}
	return (i);
}
