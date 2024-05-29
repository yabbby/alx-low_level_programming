#include "search_algos.h"
#include <stdio.h>

/**
 * linear_skip - linear search in a skip list
 * @list: skip list to be searched
 * @value: value being searched
 * Return: skiplist_t
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *cursorF = list, *cursorL = list;

	if (list == NULL)
		return (NULL);

	cursorL = cursorL->express;
	while (cursorL != NULL && cursorL->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", cursorL->index, cursorL->n);
		cursorL = cursorL->express;
		cursorF = cursorF->express;
	}
	if (cursorL == NULL)
	{
		cursorL = cursorF;
		while (cursorL->next != NULL)
			cursorL = cursorL->next;
	}
	else
		printf("Value checked at index [%lu] = [%d]\n", cursorL->index, cursorL->n);
	printf("Value found between indexes [%lu] and [%lu]\n",
		cursorF->index, cursorL->index);
	while (cursorF != cursorL->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", cursorF->index, cursorF->n);
		if (cursorF->n == value)
			return (cursorF);
		cursorF = cursorF->next;
	}
	return (NULL);
}
