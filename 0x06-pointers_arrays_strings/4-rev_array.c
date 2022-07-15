#include "main.h"

/**
 * reverse_array - reverses the content of given array
 * @a: first argument
 * @n: second argument
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	while (--n > 0)
	{
		*a ^= a[n];
		a[n] ^= *a;
		*a ^= a[n];
		++a;
		--n;
	}
}
