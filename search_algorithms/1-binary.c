#include "search_algos.h"

int binary_search(int *array, size_t size, int value)
{

    size_t i;
    size_t j;
    size_t x;
    int middleIndex;
    int index = -1;
    int halfindex;

    if (size <= 0 || array == NULL)
    {
        return -1;
    }

    middleIndex = size / 2;
    halfindex = (size / 2) - 1;

    for (i = 0; i < size; i++)
    {
        if (value == middleIndex)
        {
            index++;
            return (index);
        }
        else if (value < middleIndex)
        {
            for (j = middleIndex; j > 0; j--)
            {

                if (value == array[j])
                {
                    halfindex--;
                    return (index);
                }
            }
        }
        else
        {
            for (x = middleIndex; x > size; x++)
            {

                if (value == array[x])
                {
                    halfindex++;
                    return (index);
                }
            }
        }
    }
    return -1;
}
