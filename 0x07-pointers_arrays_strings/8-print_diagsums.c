#include "main.h"
#include <stdio.h>

/**
 * print_diagsum - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: matrix to work with
 * @size: size of matrix
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i = 0, j = 0, c1, c2;

	while (i < size && j < size)
	{
		c1 += a[i][j];
		i++;
		j++;
	}
	i = 0;
	j = size - 1;
	while (size > i && j != 0)
	{
		c2 += a[i][j];
		i++;
		j--;
	}
	printf("%i, %i", c1, c2);
}
		
