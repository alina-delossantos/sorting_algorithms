#include "sort.h"

/**
 * selection_sort -  sorts an array of integers in ascending order
 * @array: pointer arr[0]
 * @size: array size
 */
void selection_sort(int *array, size_t size)
{
	size_t k, j, place;
	int aux;

	for (k = 0; k < size - 1; k++)
	{
		place = k;
		for (j = k + 1; j < size; j++)
		{
			if (array[j] < array[place])
				place = j;
		}
		if (place != k)
		{
			aux = array[k];
			array[k] = array[place];
			array[place] = aux;
			print_array(array, size);
		}
	}
}
