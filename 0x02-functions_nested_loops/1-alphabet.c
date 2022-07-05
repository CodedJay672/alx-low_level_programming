#include"main.h"

/**
 * main - Entry point
 *
 * Return: - Always 0 (success)
 */

void print_alphabet(void)
{
	int c = 97;

	while (c <= 122)
	{
		_putchar(c);
		c++;
	}

	_putchar(10);
}

		
int main(void)
{
	print_alphabet();
	return (0);
}
