#include "main.h"

/**
 * _strncat - function that concatenates stings
 * @dest: first argument
 * @src: second argument
 * @n: third argument
 * Return: pointer to resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *dest_end = dest;
	int src_len = 0;

	while (*dest_end)
		++dest_end;
	while ((src_len < n) && src[src_len])
		++src_len;
	if ((src + src_len < dest) || (dest_end + src_len < src))
	{
		while (src_len--)
			*dest_end++ = *src++;
		*dest_end = '\0';
	}
	return (dest);
}
