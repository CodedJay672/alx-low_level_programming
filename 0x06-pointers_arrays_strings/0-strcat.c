#include "main.h"

/**
 * _strcat - function that concatenates strings
 * @dest: argument 1
 * @src: argument 2
 * Return: a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	char *dest_end = dest;
	int src_len = 0;

	while (*dest_end)
		++dest_end;
	while (src[src_len])
		++src_len;
	if ((src + src_len) < dest || (dest_end + src_len) < src)
	{
		do {
			*dest_end++ = *src++;
		} while (src_len--);
	}
	return (dest);
}
