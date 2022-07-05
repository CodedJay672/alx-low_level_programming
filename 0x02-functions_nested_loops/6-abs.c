#include "main.h"

/**
 * _abs - function that returns absolute value
 * @a: - argument for function return value
 *
 * Return: - returns absolute value of integer
 */

int _abs(int a)
{
	int b;

	if (a > 0)
	{
		b = a;
	}
	else if (a < 0)
	{
		b = a * -1;
	}
	else
	{
		b = 0;
	}
	return (b);
}
