#include "insertion_sort.h"
#include "swap.h"

void sort(unsigned int list[], int length)
{
    // for every element
    for (int i = 0; i < length; i++)
    {
        // compare it to every other element not yet sorted
        for (int j = i; j < length; j++)
        {
            // swap if out of order
            if (list[j] < list[i])
            {
                swap(list, i, j);
            }
        }
    }
}