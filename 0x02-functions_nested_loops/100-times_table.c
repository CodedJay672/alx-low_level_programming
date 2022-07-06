#include <stdio.h>
#include "main.h"

/**
 * print_times_table - function top print times table
 * @n: - integer value to be multiplied
 */

void print_times_table(int n)
{
	int a = 0;
	int c = 0;

	if (n > 15 || n < 0)
	{
	}
	else
	{
		while (a <= n)
		{
			int b =	1;

			printf("%d", c);
			while (b <= n)
			{
				if (b * a > 99)
				{
					printf(", %d", b * a);
					b++;
				}
				else if (b * a > 9)
				{
					printf(",  %d", b * a);
					b++;
				}
				else
				{
					printf(",   %d", b * a);
					b++;
				}
			}
			printf("\n");
			a++;
		}
	}
}
