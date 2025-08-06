#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order using
 *               the Bubble sort algorithm
 * @array: The array to be sorted
 * @size: Number of elements in @array
 */
void bubble_sort(int *array, size_t size)
{
	int i, j, tmp;

	i = 0;
	if (array == NULL || size < 2)
		return;

	while (i < (int)size - 1)
	{
		j = 0;
		while (j < (int)size - i - 1)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
			j++;
		}
		i++;
	}
	print_array(array, size);
}
