#include "search_algos.h"
#include <stdio.h>

/**
 * exponential_search - exponential search algo
 * @array: array to be searched
 * @size: size of the array
 * @value: value being searched
 * Return: int
 */
int exponential_search(int *array, size_t size, int value)
{
	int jump = 1, p;
	int *result = NULL;

	if (array == NULL)
		return (-1);
	while (array[jump] < value && jump < (int) size)
	{
		printf("Value checked array[%d] = [%d]\n", jump, array[jump]);
		jump *= 2;
	}
	if (jump >= (int) size)
	{
		p = size - 1;
		size = jump / 2;
	}
	else
	{
		p = jump;
		size = jump / 2 + 1;
	}
	printf("Value found between indexes [%d] and [%d]\n", jump / 2, p);
	result = binary_s(array + (jump / 2), size, value);
	if (result == NULL)
		return (-1);
	else
		return (result - array);
}

/**
 * binary_s - binary search algo
 * @array: array to be searched
 * @size: size of the array
 * @value: value to search for
 * Return: int
 */
int *binary_s(int *array, size_t size, int value)
{
	size_t i, mid;
	int *temp = array;

	if (array == NULL)
		return (NULL);

	while (size > 1)
	{
		printf("Searching in array: ");
		for (i = 0; i < size; i++)
		{
			if (i != size - 1)
				printf("%d, ", temp[i]);
			else
				printf("%d\n", temp[i]);
		}

		if (size % 2 == 0)
			mid = (size / 2) - 1;
		else
			mid = size / 2;

		if (temp[mid] == value)
			return (&(temp[mid]));
		else if (temp[mid] > value)
			size = mid;
		else
		{
			temp += mid + 1;
			size -= (mid + 1);
		}
	}
	printf("Searching in array: %d\n", temp[0]);
	if (temp[0] == value)
		return (temp);
	else
		return (NULL);
}
