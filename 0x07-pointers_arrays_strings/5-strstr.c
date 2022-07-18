#include "main.h"

/**
 * _strstr - locates a substring in a string
 * @haystack: string to search
 * @needle: substring to search for
 * Return: returns a pointer of the located string
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int a = 0;

	while (haystack[a] != 0)
	{
		int b = 0;

		while (needle[b] != 0)
		{
			if (haystack[a] == needle[b])
			{
				haystack += a;
				break;
			}
			b++;
		}
		a++;
	}
	return (haystack);
}
