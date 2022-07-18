#include "main.h"

/**
 * _strpbrk - locates a set of bytes in a string
 * @s: string to be searched
 * @accept: string to search for
 * Return: returns a pointer to the byte in searched string
 */

char *_strpbrk(char *s, char *accept)
{
	int a = 0;

	while (s[a] != 0)
	{
		int b = 0;

		while (accept[b] != 0)
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}
			b++;
		}
		a++;
	}
	return ('\0');
}

