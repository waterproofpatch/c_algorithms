#include "quicksort.h"
#include "swap.h"

void quicksort(unsigned int list[], int length)
{
    // base case: empty lists and lists of length 1 are sorted by definition
    if (length <= 1)
    {
        return;
    }
    // calculate the split point by performing one partition step
    int split_point = partition(list, length);

    // quicksort right half
    quicksort(list + split_point + 1, length - split_point - 1);
    // quicksort left half
    quicksort(list, split_point);
}

int partition(unsigned int list[], int length)
{
    // first, select a pivot index - we'll always choose the first element in
    // list
    int pivot_index = 0;            // first element in the list
    int left_mark   = 1;            // just beyond the pivot index
    int right_mark  = length - 1;   // the last element in the list

    while (1)
    {
        // find the two elements that need to be swapped to place them on the
        // correct side of the pivot
        while (left_mark <= right_mark && list[left_mark] <= list[pivot_index])
        {
            left_mark++;   // move right
        }
        while (right_mark >= left_mark && list[right_mark] >= list[pivot_index])
        {
            right_mark--;   // move left
        }

        // if we have crossed boundaries, each element in the list is at this
        // point on the correct side of the pivot
        if (right_mark < left_mark)
        {
            break;
        }
        // if we haven't crossed boundaries, then there are indeed two elements
        // that need to be swapped so that they are each on the correct side of
        // the pivot
        swap(list, left_mark, right_mark);
    }
    // right mark is now the split point
    // swap item at split point with the pivot.
    swap(list, pivot_index, right_mark);
    return right_mark;   // right_mark is the new split place
}
