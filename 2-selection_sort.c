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
int exchanged = 0;

for (i = 0; i < size; i++)
  {
  for (j = i; j < size; j++)
    {
      if (array[i] > array[j])
	{
	  temp = array[i];
	  array[i] = array[j];
	  array[j] = temp;
	  exchanged = 1;
	}
    }
  if (exchanged == 1)
    {
      print_array(array, size);
      exchanged = 0;
    }
   }
}

