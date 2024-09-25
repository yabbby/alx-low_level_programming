#include "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
 * jump_search - searches for a value in a sorted array
 * @array: array to be searched
 * @size: size of the array
 * @value: value to be searched
 *
 * Return: int
 */
int jump_search(int *array, size_t size, int value)
{
	int jump = (int)sqrt(size);
	size_t i = 0, j;

	if (array == NULL || size == 0)
		return (-1);
	while (array[i] < value && i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i += jump;
	}
	if (i)
		printf("Value found between indexes [%lu] and [%lu]\n", i - jump, i);
	else
	{
		printf("Value found between indexes [%lu] and [%d]\n", i, jump);
		i = size;
	}
	j = i - jump;
	for (; j <= i && j < size; j++)
	{
		printf("Value checked array[%lu] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
