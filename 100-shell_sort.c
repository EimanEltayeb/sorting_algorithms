#include "sort.h"

/**
 * shell_sort - sort using shell method
 * @array: array to be sorted
 * @size: size of the array
*/

void shell_sort(int *array, size_t size)
{
	size_t i, gap, c, sgap;
	int x;

	if (size < 1)
		return;
	for (gap = 1; gap <= size; gap = gap * 3 + 1)
	{
		if (gap * 3 + 1 > size)
			break;
		continue;
	}
	sgap = gap;





	for (; gap >= 1; gap = (gap - 1) / 3)
	{
		printf("gap changed\n");
		for (i = 0; (i + gap) < size; i++)
		{
			printf("i changed\n");
			c = i;
			if (array[i] > array[i + gap])
				{
					x = array[i];
					array[i] = array[i + gap];
					array[i + gap] = x;
				}
			if (i >= gap)
			{
				i = i - gap;
				while (i >= gap)
				{
					if (array[i] > array[i + gap])
					{
						x = array[i];
						array[i] = array[i + gap];
						array[i + gap] = x;
						i = i - gap;
					}
					else
					{	
						i = c;
						break;
					}
				}
			}
			i = c;
		}
		if (gap < sgap)
			print_array(array, size);
	}
}