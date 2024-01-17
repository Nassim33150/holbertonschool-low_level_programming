#include "search_algos.h"

int linear_search(int *array, size_t size, int value)
{
    int index = -1;

    size_t i;

    if (array == NULL)
    {
        return -1;
    }

    for (i = 0; i < size; i++)
    {
        index++;
        if (value == array[i])
        {
            return index;
        }
    }

    return -1;
}
