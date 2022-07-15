#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: - always 0 (success)
 */

int main(void)
{
	int count;
	unsigned long a, b, c;
	unsigned long m, n, p, q;

	count = 1;
	a = 0;
	b = 1;
	while (count <= 91)
	{
		c = a + b;
		a = b;
		b = c;
			printf("%lu, ", c);
		count++;
	}
	m = a % 1000;
	a = a / 1000;
	n = b / 1000;
	b = b / 1000;
	while (count <= 98)
	{
		q = (m + n) / 1000;
		p = (m + n) - q  * 1000;
		c = (a + b) + q;
		m = n;
		n = p;
		a = b;
		b = c;
		if (p >= 100)
			printf("%lu%lu", c, p);
		else
			printf("%lu0%lu", c, p);
		if (count != 98)
			printf(", ");
		count++;
	}
	putchar('\n');
	return (0);
}


