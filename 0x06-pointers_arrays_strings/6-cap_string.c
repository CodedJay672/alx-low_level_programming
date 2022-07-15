#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @s: function argument
 *
 * Return: Returns pointer to the changed string
 */

char *cap_string(char *s)
{
	char *sep = " \t\n,;.!?\"(){}";
	int a;
	int b;

	a = 0;
	while (s[a])
	{
		b = 0;
		if ('a' <= s[a] && s[a] <= 'z')
		{
			if (a)
			{
				while (sep[b] && sep[b] != s[a - 1])
					++b;
			}
			if (sep[b])
				s[a] -= ('a' - 'A');
		}
		++a;
	}
	return (s);
}
