#include "sort.h"

/**
* selection_sort - an implementating selection sort algorithm
* @array: the array to be sorted
* @size:size of the array
 */
void selection_sort(int *array, size_t size)
{
unsigned int i = 0, j = 0, tmp_loc = 0;
int *a;
int *b;
int tmp;
int tmp1;
while (i < size)
{
j = i;
tmp = array[j], tmp_loc = j;

while (j < size)
{
if (array[j] < tmp)
tmp = array[j];
tmp_loc = j;
j++;
}

if (array[i] != array[tmp_loc])
{
a = array + i;
b = array + tmp_loc;
tmp1 = *a;
*a = *b;
*b = tmp1;
print_array(array, size);
}
i++;
}
}
