#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
	* print_dlistint - prints all elements of a doubly linked list
	* @h: head of doubly linked list
	* Description: prints all elements of a doubly linked list
	* Return: size_t
*/
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t current;
	int length = 0;

	if (h == NULL)
		return (length);
	current = *h;
	while (current.next != NULL)
	{
		printf("%i\n", current.n);
		current = *current.next;
		length++;
	}
	printf("%i\n", current.n);
	length++;

	return (length);
}
