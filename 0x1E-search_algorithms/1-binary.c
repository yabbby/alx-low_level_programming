#include "search_algos.h"
#include <stdio.h>

/**
	* b_search - recursive binary search
	* @array: array to operate on
	* @start: start of current sub array
	* @end: end of current sub array
	* @value: value to search for
	* Description: recursive binary search
	* Return: int
*/
int b_search(int *array, int start, int end, int value)
{
	int mid;
	int i;

	if (!array)
		return (-1);

	if (start > end)
		return (-1);

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		if (i != end)
			printf("%i, ", array[i]);
		else
			printf("%i\n", array[i]);
	}

	mid = (start + end) / 2;

	if (value > array[mid])
		return (b_search(array, mid + 1, end, value));
	else if (value < array[mid])
		return (b_search(array, start, mid - 1, value));
	else
		return (mid);

}

/**
	* binary_search - searches for a value in a sorted array
	* @array: array to operate on
	* @size: size of array
	* @value: value to search for
	* Description: searches for a value in a sorted array
	* Return: int
*/
int binary_search(int *array, size_t size, int value)
{
	return (b_search(array, 0, (int)size - 1, value));
}
