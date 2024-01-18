#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers,
 * using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the index where value is located
 **/

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
