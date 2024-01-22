#include "sort.h"
/**
 * selection_sort - sorts array using selection sort
 * @array: the array to be sorted
 * @size: size of array
*/

void selection_sort(int *array, size_t size)
{
	int min;
	size_t i, j, x;

	if (size > 1)
	{
		for (i = 0; i < (size - 1); i++)
		{
			min = array[i];
			x = i;
			for (j = i; j < (size); j++)
			{
				if (min > array[j])
				{
					min = array[j];
					x = j;
				}
			}
			if (x != i)
			{
				min = array[i];
				array[i] = array[x];
				array[x] = min;
				print_array(array, size);
			}
		}
	}
}
