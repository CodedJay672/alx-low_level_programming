#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination memory location
 * @src: source memory location
 * @n: number of bytes to copy
 * Return: returns pointer to destination memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		dest[a] = src[a];
		a++;
	}
	return (dest);
}
