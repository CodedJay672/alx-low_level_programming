#include <stdio.h>

/**
 * print_to_98 - function that prins numbers to 98
 * @n: - integer argument to mark the start count value
 * Return: 0 or 1
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}
	printf("98");
	putchar('\n');
}
