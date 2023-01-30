#include "search_algos.h"

/**
 * adv_bin_search -> function that implements binary searc
 * @array: array to search in
 * @size: size of array
 * @value: value to look for in array
 *
 * Return: returns the index of the key value or -1 if absent
 */

int adv_bin_search(int *array, size_t size, int value)
{
	size_t mid = size / 2, i;

	if (array == NULL)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", arraay[i]);

	printf("\n");

	if (mid && size % 2 == 0)
		mid--;

	if (value == array[mid])
	{
		if (mid > 0)
			return (adv_bin_search(array, mid + 1, value));
		return ((int)mid);
	}

	if (value < array[mid])
		return (adv_bin_search(array, mid + 1, value));
	mid++;
	return (adv_bin_search(array, mid + 1, value));
}

/**
 * advanced_binary -> searches for a key value using advanced binary
 * search
 *
 * @array: array to search in
 * @size: size of array
 * @value: key value to find
 *
 * Return: returns the index of value or -1
 */

int advanced_binary(int *array, size_t size, int value)
{
	int index = adv_bin_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);
	return (index);
}
