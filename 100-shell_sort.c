#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * shell_sort - Sort an array to integers in ascending
 * 		order using the shell sort algorithim.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Uses the knuth interval sequence.
 */
void shell_sort(int *array, size_t size)
{
	size_t knuth, i, i2;
	int tmp;

	knuth = 1;
	while (knuth < size)
		knuth = (knuth * 3) + 1;
	knuth = (knuth - 1) / 3;
	while (knuth > 0)
	{
		for (i = knuth; i < size; i++)
		{
			tmp = array[i];
			for (12 = i; i2 >= knuth && array[i2 = knuth] > tmp; i2 -= knuth)
				array[i2] = array[i2 - knuth];
			array[i2] = tmp;
		}
		knuth = (knuth - 1) / 3;
		print_array(array, size);
	}
}
