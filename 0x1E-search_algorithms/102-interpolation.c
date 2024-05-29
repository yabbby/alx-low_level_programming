#include "search_algos.h"
#include <stdio.h>

/**
 * interpolation_search - interpolation search algo
 * @array: array to be searched
 * @size: size of the array
 * @value: value to be searched
 *
 * Return: int
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos;

	if (array == NULL)
		return (-1);

	pos = get_pos(array, 0, (int) size - 1, value);
	while (pos < size)
	{
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return ((int) pos);
		else if (array[pos] > value)
			pos = get_pos(array, 0, pos - 1, value);
		else
			pos = get_pos(array, pos + 1, (int) size - 1, value);
	}
	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}

/**
 * get_pos - applies linear interpolation formula
 * @array: array to be used
 * @low: lowest index in the array to be used
 * @high: highest index in the array to be used
 * @value: value being searched
 *
 * Return: size_t
 */
size_t get_pos(int *array, int low, int high, int value)
{
	double slope_r = ((double)(high - low) / (array[high] - array[low]));

	return (low + (slope_r * (value - array[low])));
}
