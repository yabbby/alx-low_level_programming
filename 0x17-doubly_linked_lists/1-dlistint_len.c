#include "lists.h"

/**
	* dlistint_len - returns number of elements in a dlist
	* @h: head of dlist
	* Description: returns number of elements in a dlist
	* Return: size_t
*/
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t current;
	int length = 0;

	if (h == NULL)
		return (length);
	current = *h;
	length++;
	while (current.next != NULL)
	{
		length++;
		current = *current.next;
	}

	return (length);
}
