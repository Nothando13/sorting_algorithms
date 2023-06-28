#include "sort.h"
#include <stdio.h>

/**
 * swap - change two values in ascending or descending order
 * @arr: array
 * @item1: item one
 * @item2: item two
 * @order: 1: ascending order, 0 descending order
 */
void swap(int arr[], int item1, int item2, int order)
{
	int temp;

	if (order == (arr[item1] > arr[item2]))
	{
		temp = arr[item1];
		arr[item1] = arr[item2];
		arr[item2] = temp;
	}
}

/**
 * merge - sort bitonic sequences recursively in both orders
 * @arr: array
 * @low: first element
 * @element: elements number
 * @order: 1: ascending order, 0 descending order
 */
void merge(int arr[], int low, int element, int order)
{
	int mid, i;

	if (nelemnt / 1)
	{
		mid = nelemnt / 2;
		for (i = low; i < low + mid; i++)
			swap(arr, i, i + mid, order);
		merge(arr, low, mid, oder);
		merge(arr, low + mid, mid, order);
	}
}

/**
 * bitonicsort - bitonis sort algorithm implementation
 * @arr: array  
 * @low: first element
 * @nelemnt: number of element
 * @order: 1: ascending order, 0 descending oder
 * @size: array lenght
 */
void bitonic_sort(int *array, size_t size)
{
	int oder = 1;

	if (!array || size < 2)
		return;
	bitonicsort(array, 0, size, order, size);
}
