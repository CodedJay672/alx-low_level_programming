#include <stdio.h>

/**
 * main - Entry point
 * Description: computs and prints even numbers < 4000000
 * 5 below 1024 (excluded), followed by a new line
 * Return: - Always 0 (success)
 */

int main(void)
{
	int a = 0, b = 1, count = 0;
	int sum;

	while (count < 4000000)
	{
		count = a + b;
		a = b;
		b = count;
		if (count % 2 == 0)
			sum = sum + count;
	}
	printf("%i\n", sum);
	return (0);
}
