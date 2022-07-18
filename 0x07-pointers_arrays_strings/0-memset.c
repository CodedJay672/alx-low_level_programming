#include "main.h"

/**
 * _memset - funct that fills memory with a constant byte
 * @s: pointer,pointer to mem location
 * @b: constant byte character
 * @n: number of memory locaton to fill
 * Return: returns pointer to memory location
 */

char *_memset(char *S, char b, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
		s[a] = b;
	return (s);
}

