#include "search_algos.h"
/*
 * binary_search - Performs a binary search on a sorted array.
 * @array: Pointer to the sorted array of integers.
 * @size: Size of the array.
 * @value: Value to search for in the array.
 *
 * Returns the index of the value in the array if present,
 * otherwise returns -1. The search is performed iteratively,
 * adjusting the search range based on comparisons with the middle
 * element until the value is found or the range becomes empty.
 */
int linear_search(int *array, size_t size, int value)
{
	int index = -1;

	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		index++;
		if (value == array[i])
		{
			return (index);
		}
	}

	return (-1);
}
