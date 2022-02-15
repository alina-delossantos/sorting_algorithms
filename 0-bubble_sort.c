#include "sort.h"
#include <stdio.h>
/**
 * bubble_sort -  function that sorts an array of integers in ascending order
 *
 * compares each element to the previous one and swaps them
 * repeating this until no swap is necessary
 *
 * @array: array of ints
 * @size: array size
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int temp, last = 0;

	while (last == 0)
	{
		last = 1;
		for (i = 1; i < size; i++)
		{
			if (array[i - 1] > array[i])
			{
				last = 0;
				temp = array[i];
				array[i] = array[i - 1];
				array[i - 1] = temp;
				print_array(array, size);
			}
		}
	}
}
