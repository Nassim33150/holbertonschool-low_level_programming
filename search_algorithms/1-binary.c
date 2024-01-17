#include "search_algos.h"

int binary_search(int *array, size_t size, int value)
{
    size_t left = 0;
    size_t right = size - 1;
    if (array == NULL || size == 0)
        return -1;

    while (left <= right)
    {
        size_t middle = left + (right - left) / 2;

        if (array[middle] == value)
            return middle;

        if (array[middle] < value)
            left = middle + 1;
        else
            right = middle - 1;
    }

    return -1;
}
