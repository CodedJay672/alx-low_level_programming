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
	unsigned int pos = 0;
	int a = 0, b;

	while (s[a])
	{
		b = 0;

		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				pos++;
			}
			b++;
		}
		a++;
	}
	return (pos);
}
