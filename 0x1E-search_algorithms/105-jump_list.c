#include "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
 * jump_list - jump search on a linked list
 * @list: list being searched
 * @size: size of the list
 * @value: value being searched
 *
 * Return: node where the value is found or Null
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int jump = (int)sqrt(size);
	int i = 0;
	listint_t *cursorF = list, *cursorL = list;

	if (list == NULL)
		return (NULL);
	for (; i < jump; i++)
		cursorL = cursorL->next;
	while (cursorL != NULL)
	{
		printf("Value checked at index [%lu] = [%d]\n", cursorL->index, cursorL->n);
		if (cursorL->n >= value)
			break;
		for (i = 0; i < jump && cursorL != NULL; i++)
			cursorL = cursorL->next;
		for (i = 0; i < jump; i++)
		cursorF = cursorF->next;
	}
	if (cursorL == NULL)
	{
		cursorL = cursorF;
		for (i = 0; i < jump && cursorL->next != NULL; i++)
			cursorL = cursorL->next;
		printf("Value checked at index [%lu] = [%d]\n", cursorL->index, cursorL->n);
	}
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
