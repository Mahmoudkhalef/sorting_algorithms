#include "sort.h"

/**
 * shell_sort - sorts an array of integers in ascending order
 *							using the Shell sort
 * @array: the array
 * @size: size of the array
 *
 * Return: void
 */
void shell_sort(int *array, size_t size)
{
	int temp;
	size_t j, i, gap = 1;

	if (size <= 1)
	{
		return;
	}

	while (gap < size / 3)
	{
		gap = gap * 3 + 1;
	}

	while (gap > 0)
	{
		for (i = gap; i < size; i++)
		{
			temp = array[i];
			j = i;

			while (array[j - gap] > temp && j >= gap)
			{
				array[j] = array[j - gap];
				j = j - gap;
			}

			array[j] = temp;
		}

		gap = (gap - 1) / 3;
		print_array(array, size);
	}
}
