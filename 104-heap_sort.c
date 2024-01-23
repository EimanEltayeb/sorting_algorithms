#include "sort.h"
/**
 * heap_sort - sorting array
 * @array: array to be sorted
 * @size: size of the array
 */
void heap_sort(int *array, size_t size)
{
	if (size <= 1)
		return;
	print_array(array, size);
}
