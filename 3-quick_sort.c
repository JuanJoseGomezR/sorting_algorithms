#include "sort.h"

/**
  * swapp - swaps values
  * @arr: array given
  * @st: 1st elem
  * @nd: 2nd elem
  * @size: size
  *
  * Return: nothing(void)
  */

void swapp(int *arr, int st, int nd, int size)
{
	int aux;

	if (arr[st] != arr[nd])
	{
		aux = arr[st];
		arr[st] = arr[nd];
		arr[nd] = aux;
		print_array(arr, size);
	}
}

/**
  * lomut - implementing scheme
  * @arr: array given
  * @low: low
  * @high: high
  * @size: size
  *
  * Return: i
  */

int lomut(int *arr, int low, int high, size_t size)
{
	int i = low, j, pivot = arr[high];

	for (j = low; j <= high; j++)
	{
		if (arr[j] < pivot)
		{
			swapp(arr, i, j, size);
			i++;
		}
	}
	swapp(arr, i, high, size);

	return (i);
}

/**
  * simplify - quick sort funct
  * @arr: array given
  * @low: low
  * @high: high
  * @size: size of arr
  *
  * Return: nothing(void)
  */

void simplify(int *arr, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = lomut(arr, low, high, size);
		simplify(arr, low, pivot - 1, size);
		simplify(arr, pivot + 1, high, size);
	}
}

/**
  * quick_sort - algorithm
  * @array: array given
  * @size: size of arr
  *
  * Return: nothing(void)
  */

void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;

	simplify(array, 0, size - 1, size);
}
