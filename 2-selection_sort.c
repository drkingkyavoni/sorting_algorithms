#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers in
 * ascending order using the Selection sort algorithm
 *
 * @array: int*
 * @size: size_t
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, small_idx, temp;

	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		small_idx = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[small_idx])
				small_idx = j;
		}

		if (small_idx != i)
		{
			temp = array[i];
			array[i] = array[small_idx];
			array[small_idx] = temp;
			print_array(array, size);
		}
	}
}
