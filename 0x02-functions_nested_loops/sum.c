#include <stdio.h>
#include "main.h"

/**
 * sum - function that prints the sum of numbers
 *
 * Return: -always s
 */

int sum(void)
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
	return (s);
}
