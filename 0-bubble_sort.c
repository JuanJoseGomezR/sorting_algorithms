#include "sort.h"

/**
  * bubble_sort - sorts list
  * @array: array given
  * @size: size of array
  *
  * Return: ||
  */

void bubble_sort(int *array, size_t size)
{
	unsigned int i, j;
	int k;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1; j++)
		{

			if (array[j] > array[j + 1])
			{
				k = array[j];
				array[j] = array[j + 1];
				array[j + 1] = k;
				print_array(array, size);
			}
		}
	}
}
