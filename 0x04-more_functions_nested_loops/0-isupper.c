#include "main.h"

/**
 * _isupper - checks if an arguement is uppercase
 * @c: function argument
 * Return: - return 1 (true) or 0 (false)
 */

int _isupper(int c)
{
	int a;

	if (c >= 65 && c <= 90)
	{
		a = 1;
	}
	else
	{
		a = 0;
	}
	return (a);
}
