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
	int a, b = 0;

	while (haystack[a])
	{
		while (needle[b])
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}
			b++;
		}
		if (needle[b] == '\0')
		{
			return (haystack + a);
		}
		a++;
	}
	return ('\0');
}
