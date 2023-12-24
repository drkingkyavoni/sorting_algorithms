#include "sort.h"

/**
 * selection_sorted - recursive function that sorts an array of
 * integers in ascending order using the Selection sort algorithm
 *
 * @array: int*
 * @size: size_t
 * @start_idx: size_t
 */
void selection_sorted(int *array, size_t size, size_t start_idx);

/**
 * selection_sort - function that sorts an array of integers in ascending order
 *                   using the Selection sort algorithm
 *
 * @array: int*
 * @size: size_t
 */
void selection_sort(int *array, size_t size)
{
    if (!array || size < 2)
        return;

    selection_sorted(array, size, 0);
}

void selection_sorted(int *array, size_t size, size_t start_idx)
{
    if (start_idx >= size - 1)
        return;

    size_t min_idx = start_idx;
    size_t i;

    for (i = start_idx + 1; i < size; i++)
    {
        if (array[i] < array[min_idx])
            min_idx = i;
    }

    if (min_idx != start_idx)
    {
        int tmp = array[start_idx];
        array[start_idx] = array[min_idx];
        array[min_idx] = tmp;
    }

    selection_sorted(array, size, start_idx + 1);
}
