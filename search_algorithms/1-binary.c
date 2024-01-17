#include "search_algos.h"

/*
 * binary_search - Performs a binary search on a sorted array.
 * @array: Pointer to the sorted array of integers.
 * @size: Size of the array.
 * @value: Value to search for in the array.
 * @Return: the index of the value in the array if present,
 * otherwise returns -1. The search is conducted iteratively
 * by adjusting left and right indices until the value is found
 * or the range becomes empty.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	while (left <= right)
	{
		size_t middle = left + (right - left) / 2;

		if (array[middle] == value)
			return (middle);

		if (array[middle] < value)
			left = middle + 1;
		else
			right = middle - 1;
	}

	return (-1);
}
