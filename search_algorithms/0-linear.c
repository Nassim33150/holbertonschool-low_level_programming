#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers,
 * using the Linear search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: first index where value is located
 **/
int linear_search(int *array, size_t size, int value)
{
	int index = -1;

	size_t i;

	if (array == NULL || size < 2)
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
