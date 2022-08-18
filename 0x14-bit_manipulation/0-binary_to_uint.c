#include "main.h"

/**
 * binary_to_uint -> converts binary to unsigned int
 * @b: string containing binary number to convert
 * Return: returns the unsigned integer value of the bainry digit
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int idx = 0;
	char *int_str;

	if (b == NULL)
		return (0);
	while (b)
	{
		if (b[idx] != "1" || b[idx] != "0")
			return (0);
		idx++;
	}
	idx = 0;
	int_str = malloc(sizeof(char *));
	if (int_str == NULL)
		return (0);
	while (b)
	{
		int_str[idx] = b[idx];
		idx++;
	}
