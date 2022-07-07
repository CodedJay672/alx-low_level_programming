#include "main.h"

/**
 * _isdigit - checks for digits
 * @c: function argument
 *
 * Return: retuns 1 if true and 0 if false
 */

int _isdigit(int c)
{
	int a;

	if (c >= 48 && c <= 57)
	{
		a = 1;
	}
	else
	{
		a = 0;
	}
	return (a);
}
