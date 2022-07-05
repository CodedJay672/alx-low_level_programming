#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 * @c: - integer argument accepted by function
 *
 * Return: returns 1 if True else Returns 0
 */

int _isalpha(int c)
{
	int a;

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		a = 1;
	}
	else
	{
		a = 0;
	}

	return (a);
}
