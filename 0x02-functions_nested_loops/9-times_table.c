#include "main.h"

/**
 * time_table - function that prints 9 times table
 *
 * Return: - Always 0 (success)
 */

void times_table(void)
{
	int a = 0;
	int c = 0;

	while (a <= 9)
	{
		int b = 1;

		printf("%d", c);
		while (b <= 9)
		{
			if (b * a > 9)
			{
				printf(", %d", b * a);
				b++;
			}
			else
			{
				printf(",  %d", b * a);
				b++;
			}
		}
		printf("\n");
		a++;
	}
}
