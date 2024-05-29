#include "search_algos.h"
#include <stdio.h>

/**
 * advanced_binary - improvement on binary search algo CAN GET WAY BETTER
 * @array: array to be searched
 * @size: size of the array
 * @value: value being searched
 *
 * Return: index where value is located, or -1 on failure
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t i;
	int mid, temp;

	if (array == NULL)
		return (-1);
	printf("Searching in array: ");
	for (i = 0; i < size - 1; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[size - 1]);
	if (size == 1)
	{
		if (*array == value)
			return (0);
		return (-1);
	}
	if (size == 2)
	{
		if (array[0] == value)
			return (0);
		if (array[1] == value)
			return (1);
	}
	mid = size % 2 == 0 ? (size / 2) - 1 : size / 2;
	if (array[mid] > value)
		return (advanced_binary(array, (size / 2) + 1, value));
	if (array[mid] < value)
	{
		temp = advanced_binary(array + mid + 1, size / 2, value);
		return (temp != -1 ? temp + (mid + 1) : -1);
	}
	if (array[mid] == value)
		return (advanced_binary(array, mid + 1, value));
	return (-1);
}
