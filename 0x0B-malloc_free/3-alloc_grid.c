#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - creates a two dimensional array
 * @width: number of columns
 * @height: number of rows
 * Return: returns pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int a = 0, b, c, d;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = (int **)malloc(height * sizeof(int *));
		if (ptr == NULL)
		{
			free(ptr);
			return (NULL);
		}
	c = 0;
	while (c < height)
	{
		ptr[c] = malloc(width * sizeof(int));
		if (ptr[c] == NULL)
		{
			d = 0;
			while (d > 0)
			{
				free(ptr[d]);
				d--;
			}
			free(ptr);
			return (NULL);
		}
		c++;
	}
	while (a < height)
	{
		b = 0;
		while (b < width)
		{
			ptr[a][b] = 0;
			b++;
		}
		a++;
	}
	return (ptr);
}
