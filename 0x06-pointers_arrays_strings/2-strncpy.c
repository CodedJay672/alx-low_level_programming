#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: first argument
 * @src: second argument
 * @n: third argument
 * Return: return the resulting copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *dest_end = dest;
	int src_len = 0;

	while (src_len < n && src[src_len])
		++src_len;
	if (src + src_len < dest || dest + n < src)
	{
		while (src_len)
		{
			*dest_end++ = *src++;
			--src_len;
			--n;
		}
		while (n)
		{
			*dest_end++ = '\0';
			--n;
		}
	}
	return (dest);
}
