#include "main.h"

/**
 * leet - encoding string with 1337
 * @s: function argument
 *
 * Return: pointer to the encode string
 */

char *leet(char *s)
{
	char *a;
	char map[15] = {
		'a', 'A', '4',
		'E', 'E', '3',
		'o', 'O', '0',
		't', 'T', '7',
		'l', 'L', '1'
	};
	int i;

	a = s;
	while (*a)
	{
		i = 0;
		while (i < 15)
		{
			if (*a == map[i] || *a == map[i + 1])
				*a = map[i + 2];
			i = i + 3;
		}
		++a;
	}
	return (s);
}
