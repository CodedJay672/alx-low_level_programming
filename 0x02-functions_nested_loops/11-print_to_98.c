#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - function that prins numbers to 98
 * @n: - integer argument to mark the start count value
 * 
 */

void print_to_98(int n)
{
	while (n <= 98)
	{
		printf("%d, ", n);
		n++;
	}
	printf("\n");
}
