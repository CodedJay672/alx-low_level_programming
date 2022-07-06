#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: -Always 0 (success)
 */

int main(void)
{
	long fib[50];
	int i = 2;

	fib[0] = 1;
	fib[1] = 2;

	printf("%ld, %ld", fib[0], fib[1]);
	while (i <= 49)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
		printf(", %ld", fib[i]);
		i++;
	}
	printf("\n");
	return (0);
}
