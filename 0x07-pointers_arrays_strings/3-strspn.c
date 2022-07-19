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
	unsigned int a = 0, b, t = 0;

	while (accept[a])
	{
		b = 0;

		while (s[b] != 32)
		{
			if (sccept[a] == s[b])
			{
				t++;
			}
			b++;
		}
		a++;
	}
	return (t);
}
