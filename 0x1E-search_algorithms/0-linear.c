#include "search_algos.h"

/**
 * linear_search -> function that searches for a value using
 * the linear search
 *
 * @array: pointer to array to search
 * @size: size of the array
 * @value: the value to search for
 *
 * Description: searches for a given value in an array for integers
 *
 * Return: returns the integer value or -1 if the integer is not found
 *
 */

int linear_search(int *array, size_t size, int value)
{
	int integer = value;
	size_t count = 0;

	if (array == NULL)
		return (-1);

	while (count < size)
	{
		printf("Value checked array[%ld] = [%d]\n", count, array[count]);
		if (array[count] == integer)
			return (count);
		count++;
	}
	return (-1);
}
