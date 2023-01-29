#include <math.h>
#include "search_algos.h"

/**
 * min_val -> finds the minimum between two numbers
 * @a: first arg
 * @b: second arg
 *
 *
 * Return: returns minimum value
 */

size_t min_val(int a, int b)
{
	if (a > b)
		return (b);
	else
		return (a);
}

/**
 * jump_search -> function to search for a key using
 * the jump search algorithm
 *
 * @array: array to search through
 * @size: size of the array
 * @value: value to search for in the array
 *
 * Description: Jump search takes a step (sqrt(n) in this case)
 * and searches linearly when it finds a "block" that is greater
 * than the key. 
 *
 * Return: returns index of the value or -1 if value is not found
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;

	if (array == NULL)
		return (-1);

	while (array[min_val(step, size) - 1] < value)
	{
		prev = step;
		step += sqrt(size);
		if (prev >= size)
			return (-1);
	}

	while (array[prev] < value)
	{
		prev++;
		if (prev == min_val(step, size))
			return (-1);
	}
	if (array[prev] == value)
		return (prev);
	return (-1);
}
