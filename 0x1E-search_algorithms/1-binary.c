#include "search_algos.h"

/**
 * binary_search -> function that searches using binary
 * search algorithm
 *
 * @array: array to search in (array should be sorted)
 * @size: size of the array
 * @value: value to search for within the sorted array
 *
 * Return: returns index of the value found in the array or
 * -1 if value is not found
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int mid = 0;
	int count = 0;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		mid = (left + right) / 2;
		count = left;

		printf("Searching in array: ");
		while (count <= right)
		{
			printf("%d", array[count]);
			if (count == right)
				printf("\n");
			else
				printf(", ");
			count++;
		}

		if (value > array[mid])
			left = mid + 1;
		else if (value < array[mid])
			right = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
