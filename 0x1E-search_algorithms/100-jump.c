#include <math.h>
#include "search_algos.h"

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

	while (array[step] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		prev = step;
		step += sqrt(step);

		if (prev >= size - 1)
		{
			printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
			printf("Value found between indexes [%ld] and [%ld]\n",
				prev, step);
			printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
			return (-1);
		}
	}

	printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
	printf("Value found between indexes [%ld] and [%ld]\n", prev, step);

	while (array[prev] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		prev++;
		if (array[prev] == value)
		{
			printf("Value checked array[%ld] = [%d]\n",
				prev, array[prev]);
			return (prev);
		}
	}

	return (-1);
}
