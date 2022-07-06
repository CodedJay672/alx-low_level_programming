#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: - always 0 (success)
 */

int main(void)
{
	long a = 1;
	long b = 2;
	long c;
	int counter = 1;

	printf("%ld, %ld", a, b);
	while (counter <= 98)
	{
		c = b + a;
		printf(", %ld", c);
		a = b;
		b = c;
		counter++;
	}
	printf("\n");
	return (0);
}


