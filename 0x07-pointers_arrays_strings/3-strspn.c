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

	while (accept[a] != 0)
	{
		int b = 0;

		while (s[b] != 0)
		{
			if (accept[a] == s[b])
			{
				if (pos < (unsigned int) b)
				{
					pos = b;
				}
				break;
			}
			b++;
		}
		a++;
	}
	return (pos + 1);
}

