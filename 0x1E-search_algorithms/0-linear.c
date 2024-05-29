#include "search_algos.h"
#include <stdio.h>

/**
	* linear_search - searches for a value in an array of integers
	* @array: array to operate on
	* @size: size of array
	* @value: value to search for
	* Description: searches for a value in an array of integers
	* Return: int
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%i] = [%i]\n", (int)i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
