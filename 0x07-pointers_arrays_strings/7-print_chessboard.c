#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: function argument
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	unsigned int i = 0, j;

	while (i < 8)
	{
		j = 0;
		while (a[i][j])
		{
			_putchar(a[i][j] + '0');
			j++;
		}
		i++;
	}
}
