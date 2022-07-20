#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: matrix to work with
 * @size: size of matrix
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i = 0, c1 = 0, c2 = 0;

	while (i < size)
	{
		c1 += a[(size + 1) * i];
		c2 += a[(size - 1) * (i + 1)];
		i++;
	}
	printf("%d, %d", c1, c2);
}
