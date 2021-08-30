
#include "sort.h"

/**
 * swap - swaped 2 values.
 * @array: the array for swap him values.
 * @i: First index
 * @j: Second index
 * @r_size: The size constant for print
 * Return: void
 */
void swap(int *array, int i, int j, const int r_size)
{
	int tmp;
	(void)r_size;

	if (i != j)
	{
		tmp = array[i];
		array[i] = array[j];
		array[j] = tmp;
		print_array(array, (size_t)r_size);
	}
}

/**
 * large - Largest number btween the layers
 * @array: Array to sort
 * @size: Menor element
 * @i: Largest. element
 * @r_size: The size for print in swap
 * Return: void
 */
void large(int *array, size_t size, int i, const int r_size)
{
	int largest = i;
	int lft = (2 * i) + 1;
	int rgt = (2 * i) + 2;

	if (lft < (int)size && array[lft] > array[largest])
		largest = lft;

	if (rgt < (int)size && array[rgt] > array[largest])
		largest = rgt;

	if (largest != i)
	{
		swap(array, i, largest, r_size);
		large(array, size, largest, r_size);
	}
}

/**
 * heap_sort - sorts an array of integers using Heap sort algorithm
 * @array: Array to sort
 * @size: Size of the array
 * Return: void
 */
void heap_sort(int *array, size_t size)
{
	const int r_size = (const int)size;
	int i;

	if (size < 2 || !array)
		return;

	for (i = size / 2 - 1; i >= 0; i--)
		large(array, size, i, r_size);

	for (i = size - 1; i >= 0; i--)
	{
		swap(array, 0, i, r_size);
		large(array, i, 0, r_size);
	}
}
