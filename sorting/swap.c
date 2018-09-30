#include "swap.h"

void swap(unsigned int list[], int pos1, int pos2)
{
    unsigned int tmp = list[pos1];
    list[pos1]       = list[pos2];
    list[pos2]       = tmp;
}