#include "sort.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * selection_sort - implementer function
 * @array: input array
 * @size: size of input array
 */
void selection_sort(int *array, size_t size)
{
int temp;
unsigned int i;
unsigned int j;


for (i = 0; i < size; i++)
{
for (j = i; j < size; j++)
{
if (array[i] > array[j])
{
temp = array[i];
array[i] = array[j];
array[j] = temp;
 print_array(array, size);
}
}
}
}
