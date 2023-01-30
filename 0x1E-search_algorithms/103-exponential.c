#include "search_algos.h"

/**
 * binary_search -> function that searches using binary
 * search algorithm
 *
 * @array: array to search in (array should be sorted)
 * @left: beginning index of the subarray
 * @right: ending index of subarray
 * @value: value to search for within the sorted array
 *
 * Return: returns index of the value found in the array or
 * -1 if value is not found
 */

int _bin_search(int *array, size_t left,size_t right, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			return (i - 1);
		else
			left = i + 1;
	}
	return (-1);
}

/**
 * exponential_search -> searches for a key using exponential search algorithm
 * @array: array to search in
 * @size: size of array
 * @value: value to search for
 *
 * Return: returns index of value if found, else -1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (_bin_search(array, i / 2, right, value));
}
