#include "main.h"

/**
 * _islower - returns an integer
 *
 * Return: - reaturns 1 if true, otherwise returns 0
 */

int _islower(int c)
{
	int a;

	if (c >= 97 && c <= 122)
	{
		a = 1;
	}
	else
	{
		a = 0;
	}

	return (a);
}
