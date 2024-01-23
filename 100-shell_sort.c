#include "sort.h"
/**
 * swap - swaps two array elements
 * @a1: first element
 * @a2: second element
*/

void swap(int *a1, int *a2)
{
	int x;

	x = *a1;
	*a1 = *a2;
	*a2 = x;
}
/**
 * shell_sort - sort using shell method
 * @array: array to be sorted
 * @size: size of the array
*/
void shell_sort(int *array, size_t size)
{
	size_t i, gap, c;

	if (size <= 1)
		return;
	for (gap = 1; gap <= size; gap = gap * 3 + 1)
	{
		if (gap * 3 + 1 > size)
			break;
		continue; }
	for (; gap >= 1; gap = (gap - 1) / 3)
	{
		for (i = 0; (i + gap) < size; i++)
		{
			c = i;
			if (array[i] > array[i + gap])
			{
				swap(&array[i], &array[i + gap]);
				if (i >= gap)
				{
					while (i >= gap)
					{
						if (array[i] < array[i - gap])
						{
							swap(&array[i], &array[i - gap]);
							i = i - gap;
						}
						else
						{
							i = c;
							break; }
					}
				}
			}
			i = c;
		}
		print_array(array, size); }
}
