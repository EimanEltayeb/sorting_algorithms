#include "sort.h"

/**
 * bubble_sort - bubble sort function
 * @array: array to be sorted
 * @size: arrays's size
 */

void bubble_sort(int *array, size_t size)
{
	int x = 0;
	size_t i, j;

	if (size > 1)
	{
		for (j = 0; j < (size - 1); j++)
		{
			for (i = 0; i < (size - 1); i++)
			{
				if (array[i] > array[i + 1])
				{
					x = array[i + 1];
					array[i + 1] = array[i];
					array[i] = x;
					print_array(array, size);
				}
			}
		}
	}
}
