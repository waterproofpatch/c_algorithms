/**
 *  reverse a group of integers
 * */
#include <stdio.h>
#include <stdlib.h>

#include "quicksort.h"
#include "insertion_sort.h"
#include "swap.h"

void print_list(unsigned int list[], int length);

int main(int argc, char** argv)
{
    unsigned int list1[10] = {1, 4, 3, 6, 2, 10, 20, 6, 4, 7};
    unsigned int list2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    unsigned int list3[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    // quicksorts 
    printf("Before quicksort:\n");
    print_list(list1, 10);
    quicksort(list1, 10);
    printf("After quicksort:\n");
    print_list(list1, 10);

    printf("Before quicksort:\n");
    print_list(list2, 10);
    quicksort(list2, 10);
    printf("After quicksort:\n");
    print_list(list2, 10);

    printf("Before quicksort:\n");
    print_list(list3, 10);
    quicksort(list3, 10);
    printf("After quicksort:\n");
    print_list(list3, 10);

    // insertion sorts
    unsigned int list4[10] = {1, 4, 3, 6, 2, 10, 20, 6, 4, 7};
    unsigned int list5[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    unsigned int list6[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    printf("Before insertion sort:\n");
    print_list(list4, 10);
    sort(list4, 10);
    printf("After insertion sort:\n");
    print_list(list4, 10);

    printf("Before insertion sort:\n");
    print_list(list5, 10);
    sort(list5, 10);
    printf("After insertion sort:\n");
    print_list(list5, 10);

    printf("Before insertion sort:\n");
    print_list(list6, 10);
    sort(list6, 10);
    printf("After insertion sort:\n");
    print_list(list6, 10);

    return 0;
}



void print_list(unsigned int list[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("list[%d]: %d\n", i, list[i]);
    }
}