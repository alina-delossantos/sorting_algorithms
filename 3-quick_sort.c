#include "sort.h"

/**
 * swap - swaps elements
 * @a: element a
 * @b: element b
 */
void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

/**
 *partition - partition
 *@array: array
 *@low: low value
 *@high: higher value
 *@size: size
 *Return: int
 */
int partition(int *array, int low, int high, size_t size)
{


	int i, pivot = array[high], j;



	for (j = low, i = low - 1 ; j < high; j++)
	{
		if (array[j] <= pivot)
		{

			i++;

			swap(&array[i], &array[j]);
			if (array[i] != array[j])
				print_array(array, size);
		}

	}


	swap(&array[i + 1], &array[high]);
	if (array[high] != array[i + 1])
		print_array(array, size);

	return (i + 1);
}
/**
 *sortquick - sorting fx
 *@array: array
 *@low: low
 *@high: high
 *@size: size
 */
void sortquick(int *array, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{

		pivot = partition(array, low, high, size);

		sortquick(array, low, pivot - 1, size);

		sortquick(array, pivot + 1, high, size);
	}
}
/**
 *quick_sort - entry point
 *@array: array
 *@size: size
 */
void quick_sort(int *array, size_t size)
{
	sortquick(array, 0, size - 1, size);
}
