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
	int a = 0;

	while (s[a] != 0)
	{
		int b = 0;

		while (accept[b] != 0)
		{
			if (s[a] == accept[b])
			{
				pos++;
				break;
			}
			b++;
		}
		a++;
	}
	return (pos);
}
