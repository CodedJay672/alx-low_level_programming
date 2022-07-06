#include "main.h"

/**
 * main - Entry point
 *
 * Return: - Always 0 (success)
 */

int main(void)
{
	int n = 1;
	int s;

	while (n < 1024)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			s = s + n;
		}
		n++;
	}

	printf("%d\n", s);
	return (0);
}
