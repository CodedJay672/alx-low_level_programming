#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	unsigned long int i, n = 612852475143;

	i = 3;
	while (i < 782849)
	{
		while ((n % i == 0) && (n != i))
		{
			n = n / i;
		}
		i += 2;
	}
	printf("%lu\n", n);
	return (0);
}
