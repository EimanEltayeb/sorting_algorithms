#include "sort.h"

/**
 * partition - a function
 * @array: the array to be sorted
 * @high: num
 * @low: num
 * @size: array size
 * Return: postition
*/
size_t partition(int *array, size_t low, size_t high, size_t size)
{
	int pivot = array[high], x;
	size_t i, j;

	i = low - 1; /*temp p index*/
	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			x = array[i];
			array[i] = array[j];
			array[j] = x;
			if (i != j)
				print_array(array, size);
		}
	}
	i++;
	x = array[i];
	array[i] = array[high];
	array[high] = x;
	if (i != high)
		print_array(array, size);
	return (i);
}

/**
 * sort - sort the elements
 * @array: the array to be sorted
 * @high: num
 * @low: num
 * @size: array size
*/
void sort(int *array, size_t low, size_t high, size_t size)
{
	size_t p;

	if (low >= high)
		return;
	p = partition(array, low, high, size);
	if (p != 0)
		sort(array, low, p - 1, size);
	sort(array, p + 1, high, size);
}

/**
 * quick_sort - sorts an array using Quick Sort method
 * @array: the array to be sorted
 * @size: number of elements of the array
*/

void quick_sort(int *array, size_t size)
{
	if (size > 1)
		sort(array, 0, size - 1, size);
}
