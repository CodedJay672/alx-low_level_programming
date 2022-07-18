#include "main.h"

/**
 * _strspn - function that gets length of prefix
 * substring in a string
 * @s: original string to search
 * @accept: prefix substring
 * Return: number of bytes in initial segment.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int pos;

	while (*accept)
	{
		int b = 0;

		while (*s)
		{
			if (s[b] == *accept)
			{
				if (pos < b)
				{
					pos = b + 1;
					break;
				}
			}
			b++;
			s++;
		}
		accept++;
	}
	return (pos);
}

